#ifndef LIBRARY_H
#define LIBRARY_H
#include <memory>
#include "itemstore.h"
#include "personstore.h"
#include "orderstore.h"
#include "readfile.h"
#include "menu.h"

 
class Library
{
private:
    int ID, isbn; // ID - user id, isbn(International Standard Book Number) - book id
    std::string title, a_name, a_sname;
    std::shared_ptr<Menu> menu;
    std::shared_ptr<Itemstore> itemstore;
    std::shared_ptr<Personstore> personstore;
    std::shared_ptr<Orderstore> orderstore;
    Readfile *file;
public:
    Library();
    ~Library();
    void LibRun();
    void BackToMainMenu();
    void currentUser();
    void ShowAllBooks();
    void ShowAllReaders();
    void ShowBooksBorrowed();
    void ShowBooksInStock();
    void AddBook();
    void AddReader();
    void ChangeReader();
    void AddBookToReader();
    void TakeBookFromReader();
    void ShowAllOrders();
    int getReaderID();
    int getBookID();
        
};

#endif // LIBRARY_H
