#ifndef ITEMSTORE_H
#define ITEMSTORE_H
 
#include <vector>
#include <fstream>
#include "book.h"
#include "exception.h"

class Itemstore
{
    private:
    std::vector<Item*> bookList;
    int id;
    std::fstream books;

    public:
    void addBook(std::string, std::string, std::string, bool a_status);
    void showItem(int);
    void showAll();
    void showAllInStock();
    void changeStatus(int);
    bool getStatus(int);
    void saveItemstore();
    void showItemTitle(int);
    int getCount();
    void sortViaId();
    void sortViaTitle();


    Itemstore();
    ~Itemstore();
};


#endif // ITEMSTORE_H
