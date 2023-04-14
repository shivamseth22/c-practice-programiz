#include <stdio.h>
#include<stdlib.h>


int main(){
    int arr[20]={10,20,30,40,50};
    int lb=0,ub=4,pos,item,n=20;
    for(int i=lb; i<=ub;i++){
        printf("%d  ",arr[i]);
    }
    printf("\nEnter position in which you want to add the array\n");
    scanf("%d",&pos);
    if (lb>pos)
    {
        printf("\nInvalid Entry!!!\n");
        exit(0);
    }
    
    if (ub<lb)
    {
        printf("\nunderflow");
    }
    for (int i = pos; i <ub; i++)
    {
        arr[i]=arr[i+1];
    }
    ub--;
    printf("\nDeletion successful\n");
    for(int i=lb; i<=ub;i++){
        printf("%d  ",arr[i]);
    }



    return 0;
}