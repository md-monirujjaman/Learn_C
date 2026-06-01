#include <stdio.h>

int main()
{

    // int age;
    // printf("Bro first tell your age?\n");
    //  printf("-------------------------------\n");
    //  scanf("%d", &age);

    int age = 17;

    if (age > 18)
    {
        printf("your current age is %d that gather then 18\n");
        printf("-------------------------------\n"); // this is for decoration
        printf("you have chance to get a passport");
    }

    else
    {
        printf("your current age is %d that less then 18\n", age);
        printf("-------------------------------\n"); // this is for decoration
        printf("So, haven't  to qulify a passport.\n");
        printf("-------------------------------\n");
    }
    return 0;
}