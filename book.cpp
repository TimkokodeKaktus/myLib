#include "book.h"
 
Book::Book(int a_id, std::string a_title, std::string a_authorName, std::string a_authorSurname, bool a_status)
    :Item(a_id, a_title, a_status),
      authorName(a_authorName),
      authorSurname(a_authorSurname)
{

}


void Book::show() const
{
    Item::show();
    std::cout<<" Author: "<<authorName<<' '<<authorSurname<<std::endl;
}

std::string Book::saveItem()
{
    return Item::saveItem()+"-"+authorName+"-"+authorSurname+"-";
}

