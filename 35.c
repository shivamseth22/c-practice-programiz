//TO count the no of digit in an integer
#include<stdio.h>

int main(){
    int a , count;
    printf("Enter the no a\n");
    scanf("%d", &a);
    do {
    a/=10;
    count++;
    }while(a!=0);
     printf("The no of digit in given integer is %d" ,count );
    return 0; 
}