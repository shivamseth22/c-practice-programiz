//TO calculate the power of a no
#include<stdio.h>

int main(){
    int  b ,e , result;
    result=1;
    printf("Enter the  value of base \n");
    scanf("%d", &b);
    printf("Enter the of exponent \n");
    scanf("%d", &e);
    while (e!=0)
    {
        result=result*b;
        e--;
    }
    
    
    printf("The power of given %d is %d",b,result);
    return 0; 
}