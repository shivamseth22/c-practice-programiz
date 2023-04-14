#include<stdio.h>
int mul(int a , int b );
int main(){
    int c ;
    c=mul(2,5);
    printf("The value of c is %d\n",c);
    return 0; 
}
int mul (int a , int b){
int c;
c = a*b;
return c;
}