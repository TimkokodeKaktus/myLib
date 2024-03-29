#include "personstore.h"
void Personstore::addUser(std::string a_name, std::string a_surname)
{
    ++id;
    personList.push_back(new User(id, a_name, a_surname));
}

void Personstore::showUser(int a_id)
{
	if(a_id <= id && a_id >= 0)
		personList[a_id]->show();
    else
		std::cout << "Wrong ID." << std::endl;
}
 
void Personstore::showUserName(int a_id)
{
	if(a_id <= id && a_id >= 0)
		personList[a_id]->showName();
	else
		std::cout << "Wrong ID." << std::endl;
}

void Personstore::showAll()
{
    for(auto person: personList)
        person->show();
}

Personstore::Personstore()
{
    id=0;
}

Personstore::~Personstore()
{
    for(auto person : personList)
        delete person;
}

void Personstore::savePersonstore()
{
    try{
        people.open("users.txt", std::ios::out);
        if(!people.is_open())
            throw Exception();

    }catch(Exception& e)
    {
        std::cout<<e.what();
    }

    for(auto person : personList)
        people<<person->savePerson();

    people.close();
}

int Personstore::getCount()
{
    return id;
}
