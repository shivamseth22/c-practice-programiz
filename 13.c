#include <stdio.h>
float avg(float obtained_marks,int i);
float percentage(float obtain_mark, float total_marks);
int main()
{
    float maths, physics, chemistry, bio, english, total_marks, obtained_marks;
    printf("Enter the total mark");
    scanf("%f", &total_marks);
    printf("Enter the number of maths,physics,chemistry,bio,english\n");
    scanf("%f %f %f %f %f", &maths, &physics, &chemistry, &bio, &english);
    obtained_marks = maths + physics + chemistry + bio + english;
    printf("Total Marks: %0.2f\n",total_marks);
    printf("Obtained Marks: %0.2f\n",obtained_marks);
    printf("Percentage : %0.2f\n",percentage(obtained_marks,total_marks));
    printf("Average Marks: %0.2f\n",avg(obtained_marks,5));
    return 0;
}
float avg(float obtained_marks,int i)
{
   return (obtained_marks/i);
}
float percentage(float obtain_mark, float total_marks)
{ 
    return (obtain_mark/total_marks)*100;
}
