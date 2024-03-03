#include <stdio.h>
#include <stdlib.h>

struct Element
        {
            int value;
            struct Element *next;
        };

int main()
{
        /*
        struct Element List , *head;
        while('y' == getchar())
        {
            struct Element e;
        }

        */
        union test
        {
            int i;
            char c;
        };
        union test case1;
        case1.i = 93;
        case1.c = 'a';
        printf("%c\n",case1.c);
        printf("%d\n",case1.i);
        printf("\n");
        case1.c += 1;
        printf("%c\n",case1.c);
        printf("%d\n",case1.i);
        printf("\n");
        case1.i = 5;
        printf("%c\n",case1.c);
        printf("%d\n",case1.i);
        printf("\n");

        return 0;
}
