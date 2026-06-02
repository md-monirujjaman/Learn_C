#include <stdio.h>

int main()
{
    int marks1, marks2, marks3;
    printf("Enter Your First Subject Marks\n");
    scanf("%d", &marks1);
    printf("Enter Seonnd Subject Marks\n");
    scanf("%d", &marks2);

    printf("Enter Third  Subject Marks\n");
    scanf("%d", &marks3);

    printf("Your 3 Subject Marks is %d and %d and %d\n ", marks1, marks2, marks3);

    if (marks1 < 33 || marks2 < 33 || marks3 < 33)
    {
        printf("Your are failed due to less marks in individual subject (s)\n");
    }
    else if ((marks1 + marks2 + marks3) / 3 < 40)
    {
        printf("Your are failed due to less parcentage\n");
    }

    else
    {
        printf("Your passed");
    }

    return 0;
}