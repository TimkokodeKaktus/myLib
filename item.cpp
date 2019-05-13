#include "item.h"
#include <string>
 
Item::Item(int a_id, std::string a_title, bool a_status)
    :id(a_id),
    title(a_title),
    isAvaible(a_status)
{

}

Item::~Item()
{

}

void Item::show() const
{
	if(isAvaible)
    std::cout<<"ID:"<<id<< " Book:"<<title<<" Status: in library";
    if(!isAvaible)
    std::cout<<"ID:"<<id<<" Book:"<<title<<" Status: borrowed";
}

void Item::showTitle()
{
    std::cout<<title;
}

void Item::change()
{
    isAvaible=!isAvaible;
}

bool Item::getStatus()
{
    return isAvaible;
}

std::string Item::saveItem()
{
    return title+"-"+std::to_string(isAvaible);
}

int Item::getID()
{
    return id;
}

std::string Item::getTitle()
{
    return title;
}
