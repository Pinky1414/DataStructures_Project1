//personType.h

#include <string> 

using namespace std;

class personType
{
public:
    void print() const;
    //Function to output the first name and last name
    //in the form firstName lastName.

    void setFName(string first);
    //Function to set firstName

    void setLName(string name);
    // Function to set last name only.

    void setMname(string name);

    string getFirstName() const;
    //Function to return the first name.
    //Postcondition: The value of firstName is returned.

    string getLastName() const;
    //Function to return the last name.
    //Postcondition: The value of lastName is returned.

    string getMname() const;

    bool isFirstName(string first) const;

    bool isLastName(string last) const;

    personType(string first = "", string last = "", string middle ="");
    //Constructor
    //Sets firstName and lastName according to the parameters.
    //The default values of the parameters are null strings.
    //Postcondition: firstName = first; lastName = last  

private:
    string firstName; //variable to store the first name
    string lastName;  //variable to store the last name
    string middleName; // variable for middle name
};

