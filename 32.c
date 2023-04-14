#include <stdio.h>

int main()
{
    int a, b,gcd ,i;
    printf("Enter the value of a and b\n");
    scanf(" %d %d", &a, &b);
    for (i = 1; i < a && i < b; i++)
    {
        if (a % i == 0 && b % i == 0)
            gcd = i; 
    }
     printf("The value of gcd is %d", gcd);
    return 0;
}
