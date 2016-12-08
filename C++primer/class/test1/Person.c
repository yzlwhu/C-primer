#include "Person.h"
#include <iostream>

Person::Person(string name, string address)
{
    this->name = name;
    this->address = address;
}

string Person::getName() const
{
    return this->name;
}

string Person::getAddress() const
{
    return this->address;
}
