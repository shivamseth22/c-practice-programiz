// TO fins a year for leap year 
#include<stdio.h>

int main(){
    int year;
    printf("Ente the year ");
    scanf("%d", & year); 

    if(year%4==0)
    {
printf("The given year is a leap year");

    }
    else 
    {
        printf("The given year is not a leap year");
    }
    return 0; 
}