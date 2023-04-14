//To find the greatest value among the given value
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the value of a ,b ,c \n");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b &&  a > c)
        {
            printf("a is the greatest value among the given values");
        }
    else if (b > a &&b > c)
    {
        printf("b is the greatest value among the given value");
    }
    else
    {
        printf("c is th greatest vaue among the given value");
    }

    return 0;
}
