//To check a alphabet is  vowel or constant
#include<stdio.h>

int main(){
    char alphabet;
    printf("Enter any alphabet\n");
    scanf("%c", &alphabet);
    if (alphabet =='a' || alphabet=='e'|| alphabet== 'i' || alphabet == 'o' || alphabet== 'u' )
    {
        printf("The alphabet is vowel");
    }
    else
    {
        printf("The alphabet is costant");
    }
    return 0; 
}