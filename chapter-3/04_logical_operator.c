#include <stdio.h>

int main()
{
    int a = 0;
    int b = 1;

    printf("------------------------------\n");
    printf("The value of a and b is %d\n", a && b);
    printf("The value of a or b is %d\n", a || b);

    printf("------------------------------\n");
    // this same is writing
    printf("------------------------------\n"); // this is for decoration
    if (a)
    {
        if (b)
        {
            printf("The both value is true\n");
        }
    }
    printf("------------------------------\n");

    if (a && b)
    {
        printf("The both value is true\n");
    }
    else
    {
        printf("The both value is flase\n");
    }

    printf("------------------------------\n");
    return 0;
}