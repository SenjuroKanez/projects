#include <sqlite3.h>
#include <iostream>
using namespace std;
class Database {
public:
    Database(const string& dbName) {
        if (sqlite3_open(dbName.c_str(), &db_) != SQLITE_OK) {
            cerr << "Can't open database: " << sqlite3_errmsg(db_) <<endl;
        }
    }

    ~Database() {
        sqlite3_close(db_);
    }

    void createTable() {
        const char* sql = "CREATE TABLE IF NOT EXISTS students (id TEXT PRIMARY KEY, name TEXT);";
        char* errMsg;
        if (sqlite3_exec(db_, sql, nullptr, 0, &errMsg) != SQLITE_OK) {
            cerr << "SQL error: " << errMsg << endl;
            sqlite3_free(errMsg);
        }
    }

    void insertStudent(const Student& student) {
        string sql = "INSERT INTO students (id, name) VALUES ('" + student.id + "', '" + student.name + "');";
        char* errMsg;
        if (sqlite3_exec(db_, sql.c_str(), nullptr, 0, &errMsg) != SQLITE_OK) {
            std::cerr << "SQL error: " << errMsg << endl;
            sqlite3_free(errMsg);
        }
    }

private:
    sqlite3* db_;
};