#ifndef PERSON_H
#define PERSON_H
 
#include <string>
#include <vector>
#include <iostream>

class Person
{
private:
    int id;
    std::string name;
    std::string surname;

public:
    Person(int a_id, std::string a_name, std::string a_surname);
    virtual ~Person(){}
    void show() const;
    virtual std::string savePerson();
    void showName();


};


#endif // PERSON_H
