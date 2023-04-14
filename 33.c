#include<stdio.h>

int main(){
    int x ,y ,max;
    printf("Enter the value of a and b\n");
    scanf("%d %d", &x, &y);
    max = (x > y) ? x : y;
    while (1)
    {
        if (max%x==0&& max%y==0)
        {
            printf("The lcm of %d and %d is %d",x ,y , max);
            break;
        }
        ++max;
    }
    
    return 0; 
}