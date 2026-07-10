#include <stdio.h>

int main()
{
    int a=3 , b=50, c=6, d=13;

    if(a>b && a>c && a>d) 
    {
        printf("the gratest number is A\n");
    }
    if(b>a && b>c && b>d)
    {
        printf("the gratest number is B\n");
    } 
    if(c>b && c>a && c>d)
    {
        printf("the gratest number is D\n");
    }
    if(d>b &&d>c && d>a)
    {
         printf("the gratest number is D\n");
    }
    return 0;
}