// TO generate multiplication table
#include <stdio.h>

int main()
{
    int i,j;
    for (i = 1; i < 11; i++)

    {
        printf("\n   ");
        for (j = 1; j < 11; j++)
        {
            printf("%d      ", i*j);
        }
    }

    return 0;
}