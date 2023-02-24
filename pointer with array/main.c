#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, mul , arr[4];

    printf("Inter the Numbers : \n");

    for(i = 0; i<4; i++)
    {
        scanf("%d", & arr[i]);
    }
    multi(&arr);




    return 0;
}

void multi(int* ptr)
{
    int j;
    int product = 1;


    for(j=0; j<4; j++)
    {
        product = product * ptr[j];
    }
    printf("The Multiplication is :\n %d", product);
}
