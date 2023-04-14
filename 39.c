// TO check a number for prime or not
/*#include <stdio.h>

int main()
{
    int num, l = 2;
    printf("Enter  the number\n");
    scanf("%d", &num);
    while (num > l)
    {
        if (num % l == 0)
        {
            printf("not a prime no");
            l = l + 1;
            break;
        }
    }

    if (num % l != 0)
    {
        printf("it is a prime no");
    }
    return 0;
}*/
#include <stdio.h>

int main()
{
    int x, i, p;
    printf("enter the value of x\n");
    scanf("%d", &x);
    if (x == 0 || x == 1)
    {
        printf("It is not a prime no");
    }
    for (i = 2; i < x; i++)
    {
        if (x % i == 0)
            p = 1;
    }
    if (p == 1)
    {
        printf("not a prime no");
    }
    else
    {
        printf("prime no");
    }

    return 0;
} // bhiya ye program mahan hai