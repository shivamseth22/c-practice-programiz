#include<stdio.h>
void printpattern(int n);

int main(){
    int n=4;
    printpattern(n);    
    return 0; 
}
    void printpattern(int n){
        if (n==1){
            printf("*\n");
            return ;
        }
    }