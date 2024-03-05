#include <stdio.h>

/*These work in C but not in C++*/
void show();
void show(int j);

/*This works in neigther C nor C++*/
void show(void);
/*Gives the Error too many arguments to function
for using the function in main.*/
/*So it's different to write void as the argument
or just leave it empty.*/


int main()
{
    show(10);
}

void show(int val) {printf("Integer: %d",val);}
