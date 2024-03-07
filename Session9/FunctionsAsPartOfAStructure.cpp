#include <iostream>
#include <string.h>
using namespace std;

/*We can have functions in structures as well.
This is different from functions in classes.
In classes it's call by refrence but in structs
it's call by value.
Meaning when we pass a struct to a function, it's
call by value but when we pass a class to a function,
it's call by reference.*/

/*in C++*/
struct Person
{
    char name[80];
    char address[80];
    void print();
};

/*The method can be defined outside the struct.*/
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

