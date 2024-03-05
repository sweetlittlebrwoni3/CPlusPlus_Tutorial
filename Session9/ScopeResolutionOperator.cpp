#include <stdio.h>
int counter=50;             //global variable
int main()
{
    int counter=10;
    for(int counter=1;      //this refers to the
        counter<10;         //local variable
        counter++)
    {
        printf("%d\n",
        ::counter           //global variable
        /                   //divided by
        counter);           //local variable
    }
}

/*So this operator "::" can be used to access the
global scope variable.*/
/*Global scope not higher scope*/
/*Kind of like the "/" directory which is the 
system directory.*/