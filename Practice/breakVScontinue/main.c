#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;
    int j = 0;
    int counter = 0;
    //for(j ; j<10 ; j++)
    {
        for (printf("first\t") ; printf("second\t") && i < 10 ;printf("third\t"))
        {
            i += 1;
            counter += 1;
            printf("forth\t");
        }
        printf("\n");
    }
    return 0;
}
