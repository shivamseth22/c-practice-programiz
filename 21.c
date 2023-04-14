// To check a number is even or odd
#include <stdio.h>

int main()
{
    int a;
    printf("Enter the no\n");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("The no is even");
    }
    else
    {
        printf("The no is odd");
    }
    return 0;
}