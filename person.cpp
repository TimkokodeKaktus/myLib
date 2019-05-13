#include "person.h"
 
Person::Person(int a_id, std::string a_name, std::string a_surname)
    :id(a_id),
    name(a_name),
    surname(a_surname)
{
}

void Person::show() const
{
    std::cout<<"ID:"<<id<<" Name:"<<name<<" "<<surname<<std::endl;
}

void Person::showName()
{
    std::cout<<name<<" "<<surname;
}

std::string Person::savePerson()
{
    return name+"-"+surname;
}
