#include "user.h"
 
User::User(int a_id, std::string a_name, std::string a_surname) : Person(a_id, a_name, a_surname)
{
}


void User::show() const
{
    Person::show();
}


std::string User::savePerson()
{
    return Person::savePerson()+"-";
}
