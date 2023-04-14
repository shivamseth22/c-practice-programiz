//TO reverse a number 
#include<stdio.h>

int main(){
    int a , rev  ; 
    rev=0;
    printf("Entr a suitable value of a\n");
    scanf("%d", &a);
    while (a!=0);
    {
        rev=((rev*10)+(a%10));
        a=a/10;
    }
    printf("The revrse value is%d", rev);
    return 0; 
}