#include <stdio.h>

int Sum(int a=1,int b=4){return a+b;}

int main()
{
    printf("%d",Sum());         //arguments: 1+4
    printf("%d",Sum(20));       //arguments: 20+4
    printf("%d",Sum(20,5));     //arguments: 20+5
    //sum(,6);                  //Error
}

/*We can add default paramaters for functions
only in c++ and not c. */

/*We can't have the first arguments as default
parameter and not the last ones.for example:
int sum(int a,int b=1,int c){return a+b;}     //Error
Because we cant use the function like the last line.*/

/*Default arguments must be known at compile time
since at that moment arguments are supplied to functions.
Therefore, the default arguments must be mentioned
at the function's declaration, rather than
its implementation.
(DefaultFunctionArguments practice)*/

/*Implementation is when you write the whole function
and declaration is when you just write the name of
the function to be able to use it.*/

/*As for the question asked,
default arguments should be supplied to functions
only in declaration meaning only in these files:
firstfunction.h or secondfunction.cpp
and should not be in both these files simultanously.
This is also the case when not using a header file*/