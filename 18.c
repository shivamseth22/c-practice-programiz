//To find the remainder and quotient 

#include<stdio.h>

int main(){
    int a, b, c ,d ;
    printf("Enter the value of a\n");
    scanf("%d" , &a);
    printf("Enter the value of b\n");
    scanf("%d" , &b);
    c =a/b;
    d =a%b;
    printf("The value of remainder is %d\n",c);
    printf("The value of remainder is %d\n",d);
    return 0; 
}