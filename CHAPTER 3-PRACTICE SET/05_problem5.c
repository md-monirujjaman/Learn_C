#include <stdio.h>

int main()
{
    char ch;
    printf("Plese input the character you want\n");
    scanf("%d",&ch);
    
    printf("the character is %c\n",ch);
    printf("the value of character is %d\n",ch);
    // 97 - 122
    if (ch>97 && ch<=122)   
    {
        printf("This carater is lowercase\n");
    }
    else{
        printf("This carater is not lowercase\n");
    }
    
    return 0;
}