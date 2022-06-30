#include <stdio.h>
struct student
{
    char name[50];
    int roll[50];
    float marks[];
} s[10];
int main()
{
    int i,j;  //For Loops
    printf("Enter information of students:\n");

    for (i = 0; i < 3; ++i)
    {
        //s[i].roll = i + 1;
        printf("enter roll number\n");
        scanf("%d",&s[i].roll);
      
        printf("Enter name\n ");
        scanf("%s", s[i].name);
        printf("Enter marks of 5 Subjects\n");
        for (int j = 0; j <5; j++)
        {
              scanf("%f", &s[i].marks[j]);
        }
        
      
        printf("\n");
    }
    printf("Displaying Information:\n\n");

    for (i = 0; i <3; ++i)
    {
       
        printf("\nRoll number: %d\n", s[i].roll);
        printf("Name is  ");
        puts(s[i].name);
for (int j = 0; j <5; j++)
{
    printf("Marks: %f\n", s[i].marks[j]);
}
        
        printf("\n");
    }
    return 0;
}                                           //SuzanCodes:)
