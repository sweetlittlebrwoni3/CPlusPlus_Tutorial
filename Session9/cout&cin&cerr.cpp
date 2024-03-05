/*
-cout, analogous to stdout
-cin, analogous to sdin
-cerr, analogous to stderr
*/

/*All the switches that were availble in printf
are available here as well, only with different syntax.*/

#include <iostream>
using namespace std;
int main()
{
    int ival;
    char sval[30];
    std::cout<<"Enter a number:\n"; //<<, insertion operator
    cin>>ival;                      //>>,extraction operator
    cout<<"And now a string\n";
    cin>>sval;

    cout<<"The number is: "<<ival<<"\n"
        "And the string is: "<<sval<<'\n';
}

/*We consider the monitor is on the left!*/
