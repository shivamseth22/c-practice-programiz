#include <stdio.h>

int main()
{
    int a, b , temp;
    printf("Enter the value of a \n ");
    scanf("%d", &a);
    printf("Enter the value of b \n ");
    scanf("%d", &b);
    temp= a;
    a=b;
    b =temp;
    printf("The swaaaped no is %d",a);
    printf("The swaaaped no is %d",b);


    return 0;
}