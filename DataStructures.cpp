//Test Program personType with first name and last name 
// Ronald Torres 
// 31-08-2023
#include <iostream>  
#include <string>
#include "personType.h" 

using namespace std;

int main()
{
    personType student("Lisa", "Regan", "Mona");
    student.print();


    //Taking input and checking names
    cout << endl;
    string name; 
    cout << "What is your first name? ";
    cin >> name;
    student.isFirstName(name);
    
    cout << "What is your last name? ";
    cin >> name;
    student.isLastName(name);
    return 0;
}
