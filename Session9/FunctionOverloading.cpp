#include <stdio.h>
void show(int val){printf("integer: %d\n",val);}
void show(double val){printf("Double: %f\n",val);}
void show(char const *val){printf("String: %s\n",val);}

int main()
{
    show(12);
    show(3.1415);
    show("Hello World!\n");
}

/*But we cannot write a function such as:
int show()*/


//2 Important notes:

/*-Do not use function overloading for functions
doing coneptually different tasks.*/

/*-C++ does not allow identically named functions to
differ in their return values. Only input arguments
can be different.*/