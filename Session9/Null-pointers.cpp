/*Null-pointers,0-pointers and nullptr(C++ 11)*/
/*nullptr only works in compiler version 11*/
#include <stdio.h>
void show (int val){printf("Integer: %d\n",val);}
void show (double val){printf("Double: %f\n",val);}
void show (char const *val){printf("String: %s\n",val);}

int main()
{
    show(0);        //Calls the first function
    show(NULL);     //It is defined that NULL=0
                    //so it is equal to show(0);
    show((char*)0); //This forces the compiler 
                    //to use the third function.
                    //(In every C++)
    show(nullptr);  //Does the same thing and 
                    //uses the third function.
                    //(Only in C++ 11)
}