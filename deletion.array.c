#include <stdio.h>
#include<stdlib.h>


int main(){
    int arr[20]={10,20,30,40,50};
    int lb=0,ub=4,pos,item,n=20;
    for(int i=lb; i<ub;i++){
        printf("%d  ",arr[i]);
    }
    printf("\nEnter item\n");
    scanf("%d",&item);
    printf("\nEnter position in which you want to add the array\n");
    scanf("%d",&pos);
    if (ub<pos)
    {
        printf("\nInvalid Entry!!!\n");
        exit(0);
    }
    
    if (n==ub)
    {
        printf("\noverflow");
    }
    for (int i = ub; i >=pos-1; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos-1]=item;
    ub++;
    printf("\nInsertion successful\n");
    for(int i=lb; i<=ub;i++){
        printf("%d  ",arr[i]);
    }
printf("\nposition of array is %d",pos);


    return 0;
}