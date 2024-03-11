#include <stdio.h>

int CvsCpp1()
{
    //C and C++
    int int_value;
    int *ref=&int_value;

    ++int_value;
    ++(*ref);               //Shouldn't forget the "*" before ref.


    //C++
    int int_value;
    int &ref=int_value;

    ++int_value;
    ++ref;                  //This is the same as ++(*ref).
    /*This has less syntax and is less likely
    to have syntax errors. But it does the exact
    same job as the code above.
    Also the "*" is not needed before ref to change
    the value of int_value.*/
}


//C and C++
void increase(int *valp)
{
    *valp +=5;
}
//We call this "pointer".

//C++
void increase(int &valr)
{
    valr +=5;
}
//We call this "Refrence".

int CvsCpp2()
{
    //C and C++
    int x;
    increase(&x);

    //C++
    int x;
    increase(x);
    //This way we can do the same with less syntax.
}

int RefrenceFromAnotherFile()
{
    //Let us assume ip and ir are pointers declared in another file.
    extern int *ip;
    extern int &ir;

    ip=0;                   //reassigns ip, now a 0-pointer
    //Meaning it's not pointing to the same variable anymore.

    ir=0;                   //ir unchanged. the int variable it refers to is now 0;
    //Still points to the same variable but the value of the variable is changed.

    //int &q;                 //Error: declared as refrence but not initialized.
    //For this syntax to work we should point the pointer to somewhere when declaring.
}
/*We can change where pointer is pointing
but we cannot change where reference is
pointing.*/



//This works but is bad practice and should not be used in code.
int &func()
{
    static int V;
    //Why did we use static in here?!
    return V;
}

int UglyCode()
{
    func()=20;
    func()+=func();
}
/*Here a function is declared and there's a static space
in this function. We can Call this space "V". "V" has a
value. In this function we return a reference to this value.
This is like returning the address(reference to the value).
It's just like returning this: &p=V;*/
//*More Explaination in handwritten notes.



/*
Rvalue References (C++11)
-Ivalue refrence(typename &)
-rvalue reference(typename &&)
*/
int intVal()
{
    return 5;
}

int Rvalue()
{
//    int &ir=intVal();           //fails: refers to a temporary
      int const &ic=intVal();     //OK: immutable temporary
//    int *ip=&intVal();          //fails: no Ivalue available
}
//As we know from C: int *p =5; gives error.

