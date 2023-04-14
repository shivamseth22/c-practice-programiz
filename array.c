#include<stdio.h>

int main(){
    int mark[5];
    for(int i=0 ; i<5 ; i++){
    scanf("%d" , &mark[i]);
    }
    for(int i=0 ; i<5 ; i++){
        printf("The obtained marks are %d\n",mark[i]);
    }

    return 0; 
}\