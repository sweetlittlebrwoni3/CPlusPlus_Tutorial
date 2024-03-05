
/*The keyword typedef is still used in C++
but is not required anymore when defining
union,struct or enum definition.*/
int main()
{
    struct SomeStruct
    {
        int a;
        double d;
        char string[80];
    };
    SomeStruct what;        //in c: struct SomeStruct what;
    what.d=3.1415;
}
/*We don't have to write struct when using a struct or 
use typedef.*/
