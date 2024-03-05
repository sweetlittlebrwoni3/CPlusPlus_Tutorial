#include <iostream>
#include <string.h>
using namespace std;

/*We can have functions in structures as well.
This is different from functions in classes.
The functions in classes are called by reference
but in structs are called by value.*/

/*in C++*/
struct Person
{
    char name[80];
    char address[80];
    void print();
};
void Person::print()
{
    cout<<"Name: "<<name<<"\n"
        "Address: "<<address<<"\n";
}

/*in C and C++*/
typedef struct
{
    char name[80];
    char address[80];
}PERSON;
/*print information */
void print(PERSON const *p)
    {
        
    }
/* etc... */

int main()
{
    /*The C++ part*/
    Person person;
    strcpy(person.name,"Karel");
    person.print();

}

