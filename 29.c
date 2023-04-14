// To find a factorial of a number
#include<stdio.h>

int main(){
    int a , b=1 , i ;
    printf("Enter the value of a for finding the factorial\n");
    scanf("%d" ,&a);
    for (i=a; i>0; i--)
    b=b*i;
    {
        printf("The factorial of a is %d" , b);
    }
    return 0; 
}