#include <stdio.h>

int main()
{
    int a;
    printf("Enter a Number:\n");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("you entered number is 1");
        break;
    case 2:
        printf("you entered number is 2");
        break;
    case 3:
        printf("you entered number is 3");
        break;

    default:
        break;
    }
    return 0;
}