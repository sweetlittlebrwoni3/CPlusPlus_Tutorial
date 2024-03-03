#include <stdio.h>
#include <stdlib.h>

int main()
{
    int const a = 10;
    int b = 5;
    int c = 15;
    int *p = &a;
    *p = 12;
    const int *q = &b;
    b = 4;
    int * const k = &c;
    const int **l = &k;
    int ** const m = &p;

    int d[6];
    for(int i = 0; i<sizeof(d)/4; i++)
    {
        d[i] = i;
    }
    int **point = &d;
    *point += 1;
    for(int i = 0; i<sizeof(d)/4; i++)
    {
        printf("%d \n",d[i]);
    }
    return 0;
}
