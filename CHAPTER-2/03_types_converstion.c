#include <stdio.h>

int main()
{
    float a = 9.0;
    int b = 2;
    float c = a / b;
    printf("--------------------------------\n");// This is for decoration nothing else.
    printf("The value of a/b is %f\n", c);
    printf("--------------------------------\n");

    // int and int       =  int
    // int and float     =  float
    // float and float   =  float

    return 0;
}