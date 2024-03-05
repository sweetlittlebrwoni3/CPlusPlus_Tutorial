#include <stdio.h>

/*Local variables are only usable in C++ and not C*/

int main()
{
    for(int i=0;i<20;++i)
        printf("%d\n",i);
    switch(int c=getchar())
    {
        //c is only declared in this scope
    }
    if(int c=getchar())
    {
        //c is only declared in this scope
    }
}