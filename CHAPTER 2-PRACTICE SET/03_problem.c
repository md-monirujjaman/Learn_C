#include <stdio.h>

int main()
{
    int a = 3349895;

    printf("--------------------------------\n"); // This is for decoration nothing else.
    printf("The value of  a%97 is %d\n", a%97);
    printf("--------------------------------\n");
    return 0;
}