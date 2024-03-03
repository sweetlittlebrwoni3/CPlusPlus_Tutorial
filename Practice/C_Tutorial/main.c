#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello World3");
    printf("\n");
    int input;
    printf("please enter a number:");
    scanf("%d",&input);
    int weight;
    int output = 0;
    for(weight = 1;input > 0;weight += 1)
    {
        if(input%10 > 1)
            {
                printf("The number you entered is not correct\n");
                break;
            }
        output += weight*(input%10);
        input /= 10;
    }
    printf("%d",output);
    return 0;
}
