#include <stdio.h>

int main()
{
    int a = 3;
    int b = 6;
    int c = 9;

    printf("The value is %d\n", a * b / c + 7);

    printf("--------------------------------\n"); // This is for decoration nothing else.
    printf("The vaule is %d\n",3*b/2*c+7*a);
    printf("--------------------------------\n");

    //3*b/2*c+7*a                        1st prioty */%
    //3*b/2*c+21                         2nd prioty +-
    //18/2*c+21                          3rd prioty  =
    //9*c+21
    //81+21
    //103
    return 0;
}