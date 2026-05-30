#include <stdio.h>

int main()
{
    int n = 42;
    int m = 32.33;
    n = (int)m;
    printf("--------------------------------\n"); // This is for decoration nothing else.
    printf("The value is %d\n", n);
    printf("--------------------------------\n");
    return 0;
}