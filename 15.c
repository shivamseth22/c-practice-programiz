#include<stdio.h>
#include<string.h>

struct employee {
    int code;
    float salary;
    char name[10]; 
};
int main(){
     struct employee e1, e2, e3;
    printf("Enter the value for code of e1:");
    scanf("%d",&e1.code);
    printf("Enter the value for salary of  e1:");
    scanf("%f",&e1.salary);
    printf("Enter the value for name of e1:");
    scanf("%s",&e1.name);
    printf("%d %f %s" , e1.code , e1.salary , e1.name);
    
    printf("Enter the value for code of e2:");
    scanf("%d",&e2.code);
    printf("Enter the value for salary of  e2:");
    scanf("%f",&e2.salary);
    printf("Enter the value for name of e2:");
    scanf("%s",&e2.name);
     printf("%d %f %s/n ", e2.code , e2.salary , e2.name);

    printf("Enter the value for code of e3:");
    scanf("%d",&e3.code);
    printf("Enter the value for salary of  e3:");
    scanf("%f",&e3.salary);
    printf("Enter the value for name of e3:");
     printf("%d %f %s/n ", e3.code , e3.salary , e3.name);
    scanf("%s",&e3.name);
    return 0; 
}