#include <boost/asio.hpp>
#include <boost/beast.hpp>
#include <iostream>
using namespace std;
namespace beast = boost::beast; // from <boost/beast.hpp>
namespace http = beast::http;    // from <boost/beast/http.hpp>
namespace net = boost::asio;      // from <boost/asio.hpp>
using tcp = boost::asio::ip::tcp; // from <boost/asio/ip/tcp.hpp>

class Server {
public:
    Server(unsigned short port) : acceptor_(io_context_, tcp::endpoint(tcp::v4(), port)) {
        do_accept();
    }

    void run() {
        io_context_.run();
    }

private:
    void do_accept() {
        acceptor_.async_accept(
            [this](beast::error_code ec, tcp::socket socket) {
                if (!ec) {
                    make_shared<Session>(move(socket))->start();
                }
                do_accept();
            });
    }

    net::io_context io_context_;
    tcp::acceptor acceptor_;
};

class Session : public std::enable_shared_from_this<Session> {
public:
    Session(tcp::socket socket) : socket_(std::move(socket)) {}

    void start() {
        do_read();
    }

private:
    void do_read() {
        auto self(shared_from_this());
        socket_.async_read_some(boost::asio::buffer(data_),
            [this, self](beast::error_code ec, std::size_t bytes_transferred) {
                if (!ec) {
                    // Process the request and send a response
                    do_write(bytes_transferred);
                }
            });
    }

    void do_write(std::size_t length) {
        auto self(shared_from_this());
        boost::asio::async_write(socket_, boost::asio::buffer(data_, length),
            [this, self](beast::error_code ec, std::size_t /*length*/) {
                if (!ec) {
                    do_read();
                }
            });
    }

    tcp::socket socket_;
    char data_[1024];
};

int main() {
    try {
        Server server(8080);
        server.run();
    } catch (exception& e) {
        cerr << "Error: " << e.what() << endl;
    }
    return 0;
}