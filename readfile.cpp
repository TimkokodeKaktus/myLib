#include "readfile.h"
 
Readfile::Readfile(std::shared_ptr<Personstore> m_personstore)
{
    try{
        users.open("users.txt",std::ios::in);
        if(!users.is_open())
            throw Exception();

    }catch(Exception& e)
    {
        std::cout<<e.what();
    }

    try{
        books.open("books.txt",std::ios::in);
        if(!books.is_open())
            throw Exception();

    }catch(Exception& e)
    {
        std::cout<<e.what();
    }

    try{
        orders.open("orders.txt",std::ios::in);
        if(!orders.is_open())
            throw Exception();

    }catch(Exception& e)
    {
        std::cout<<e.what();
    }
}

Readfile::~Readfile()
{
    users.close();
    books.close();
    orders.close();
}

void Readfile::readBooks(std::shared_ptr<Itemstore> itemstore)
{
    i=0;
    while(getline(books,temp,'-'))
    {
        i++;
        if(i==1){
            title=temp;
        }
        if(i==2){
            status = atoi(temp.c_str());
        }
        if(i==3){
            a_name=temp;
        }
        if(i==4){
            a_sname=temp;
        }
        if(i>3)
        {
            itemstore->addBook(title, a_name, a_sname, status);
            i=0;
        }
    }
}

void Readfile::readUsers(std::shared_ptr<Personstore> m_personstore)
{
	i=0;
    while(getline(users,temp,'-'))
    {
		i++;
		if(i==1)
			a_name=temp;
		if(i==2)
			a_surname=temp;
		if(i>1){
			m_personstore->addUser(a_name, a_surname);
			i=0;
		}
	}
}

void Readfile::readOrders(std::shared_ptr<Orderstore> orderstore)
{
    i=0;
    while(getline(orders,temp,'-'))
    {
        i++;
        if(i==1)
            id_book=atoi(temp.c_str());
        if(i==2)
            id_users=atoi(temp.c_str());
        if(i==3)
            status=atoi(temp.c_str());
        if(i>2)
        {
            orderstore->addOrder(id_users,id_book,status);
            i=0;
        }
    }
}
