//TO find the charater is an alphabet or not 
#include<stdio.h>

int main(){
   char character ,a ,z;
    printf("Enter any character\n");
    scanf("%c" , &character);
 
    //if (character >= 'a' || character <= 'z')  ye run nhi krega kyuki bich me or lga hua hai
    if (character >= 'a' && character <= 'z') 
    {
        printf("The given character is an alphabet");
    }
    else 
    {
        printf("The given character is not an alphabet");
    }
    return 0; 
}