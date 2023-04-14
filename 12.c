#include<stdio.h>
 float prcentage( int obtain_mark ,int total_marks);
int main(){
    float obtain_mark , total_marks;
    printf("Enter the value of obtain mark\n");
    scanf("%f",&obtain_mark);
    printf("Enter the value of total mark\n");
    scanf("%f",&total_marks);
    printf("The percentage value of obtain mark is %f \n", prcentage(obtain_mark , total_marks ));
    return 0; 
}
float prcentage( int obtain_mark ,int total_marks){
    float result;
    return result=((float)obtain_mark/total_marks)*100;
}
