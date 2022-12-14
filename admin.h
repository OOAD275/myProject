#ifndef ADMIN_H
#define ADMIN_H

#include "user.h"
class Book;
class Admin : public User
{
private:
    vector<Book*> my_books;
    vector<string> my_books_names;
public:
     Admin();
     Admin(string name , string password,string email);
     void showInfo();
     void addBook(Book* Published_Book);
     void RemoveBook(Book* Removed_Book);
     void addBook(string Published_Book);
     void RemoveBook(string Removed_Book);
     Book getMyBook(int i);
     int pubBooksNum();
     vector<string> viewMyBooks();
};

#endif // ADMIN_H
