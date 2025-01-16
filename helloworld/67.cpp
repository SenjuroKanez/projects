#include <iostream>
#include <string>
using namespace std;

struct Book {
    string title;
    int id;
    bool isBorrowed = false; 
};

struct Member {
    string name;
    int id;
    int borrowedBookId = -1;
};


Book books[10000];
Member members[10000];
int bookCount = 0;
int memberCount = 0;

void bookadd();
void memberadd();
void borrow();
void returnb();
void booklist();
void genrep();

int main() {
    int choice;
    do {
        cout << "1. Add a book" << endl;
        cout << "2. Add a member" << endl;
        cout << "3. Borrow a book" << endl;
        cout << "4. Return a book" << endl;
        cout << "5. List of books" << endl;
        cout << "6. Generate Report for Member" << endl;
        cout << "7. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
        case 1:
            bookadd();
            break;
        case 2:
            memberadd();
            break;
        case 3:
            borrow();
            break;
        case 4:
            returnb();
            break;
        case 5:
            booklist();
            break;
        case 6:
            genrep();
            break;
        case 7:
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
        }
    } while (choice != 7);
    return 0;
}

void bookadd() {
    if (bookCount >= 10000) {
        cout << "Book capacity reached!" << endl;
        return;
    }
    cout << "Enter the title of the book: ";
    cin.ignore();
    getline(cin, books[bookCount].title);
    books[bookCount].id = bookCount;
    cout << "Book ID: " << books[bookCount].id << endl;
    cout << "Book added successfully" << endl;
    bookCount++;
}

void memberadd() {
    if (memberCount >= 10000) {
        cout << "Member capacity reached!" << endl;
        return;
    }
    cout << "Enter the name of the member: ";
    cin.ignore(); 
    getline(cin, members[memberCount].name);
    members[memberCount].id = memberCount;
    cout << "Member ID: " << members[memberCount].id << endl;
    cout << "Member added successfully" << endl;
    memberCount++;
}

void borrow() {
    int bookId, memberId;
    cout << "Enter the member ID: ";
    cin >> memberId;
    if (memberId < 0 || memberId >= memberCount) {
        cout << "Invalid member ID!" << endl;
        return;
    }
    cout << "Enter the book ID to borrow: ";
    cin >> bookId;
    if (bookId < 0 || bookId >= bookCount || books[bookId].isBorrowed) {
        cout << "Invalid or unavailable book ID!" << endl;
        return;
    }
    if (members[memberId].borrowedBookId != -1) {
        cout << "Member already has a borrowed book!" << endl;
        return;
    }
    books[bookId].isBorrowed = true;
    members[memberId].borrowedBookId = bookId;
    cout << "Book borrowed successfully!" << endl;
}

void returnb() {
    int memberId;
    cout << "Enter the member ID: ";
    cin >> memberId;
    if (memberId < 0 || memberId >= memberCount) {
        cout << "Invalid member ID!" << endl;
        return;
    }
    int bookId = members[memberId].borrowedBookId;
    if (bookId == -1) {
        cout << "This member has not borrowed any books!" << endl;
        return;
    }
    books[bookId].isBorrowed = false;
    members[memberId].borrowedBookId = -1;
    cout << "Book returned successfully!" << endl;
}

void booklist() {
    cout << "List of books:" << endl;
    for (int k = 0; k < bookCount; k++) {
        cout << "Book ID: " << books[k].id << endl;
        cout << "Book Title: " << books[k].title << endl;
        cout << "Status: " << (books[k].isBorrowed ? "Borrowed" : "Available") << endl;
    }
}

void genrep() {
    int memberId;
    cout << "Enter the member ID to generate the report: ";
    cin >> memberId;
    if (memberId < 0 || memberId >= memberCount) {
        cout << "Invalid member ID!" << endl;
        return;
    }
    Member &m = members[memberId];
    cout << "Member ID: " << m.id << endl;
    cout << "Member Name: " << m.name << endl;
    if (m.borrowedBookId != -1) {
        cout << "Borrowed Book ID: " << m.borrowedBookId << endl;
        cout << "Borrowed Book Title: " << books[m.borrowedBookId].title << endl;
    } else {
        cout << "No books borrowed by this member." << endl;
    }
}