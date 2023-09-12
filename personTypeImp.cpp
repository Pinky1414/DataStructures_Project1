//personTypeImp.cpp

#include <iostream> 
#include <string>
#include "personType.h"

using namespace std;

void personType::print() const
{
    cout << firstName << " " << middleName << " " << lastName;
}

void personType::setFName(string name)
{
    firstName = name;
}
void personType::setLName(string name)
{
    lastName = name;
}
void personType::setMname(string name)
{
    middleName = name;
}
string personType::getFirstName() const
{
    return firstName;
}

string personType::getLastName() const
{
    return lastName;
}
string personType::getMname() const
{
    return middleName;
}

// Function to check first name of input
bool personType::isFirstName(string first) const
{
    if (first == firstName)
    {
        cout << "The person's first name is " << firstName << endl;
        return true;
    }
    if (first != firstName)
    {
        cout << "The person's first name is not " << firstName << endl;
        return false;
    }
}

//Function to check last name of person 
bool personType::isLastName(string last) const
{
    if (last == lastName)
    {
        cout << "The person's last name is " << lastName << endl;
        return true;
    }
    if (last != lastName)
    {
        cout << "The person's last name is not " << lastName << endl;
        return false;
    }
}


//constructor
personType::personType(string first, string last, string middle)

{
    firstName = first;
    lastName = last;
    middleName = middle;
}

