//To find the root of a quardratic equation
#include<stdio.h>

int main(){
    int a ,b ,c , R1, R2  ;

    //a , b ,c are the cofficient quardratic equation
    printf("Enter the values of the a ,b ,c \n");
    scanf("%d %d %d" , &a , &b ,&c );
    R1=(-b/a);
    R2=(c/a);
    printf("First root is %d and Second root is %d" , R1 ,R2  );
    return 0; 
}