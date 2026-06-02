#include <stdio.h>

int main (){
    int a;
    printf("Please enter your mark:\n");
    printf("---------------------------\n");
    scanf("%d",&a);
    printf("---------------------------\n");
    if (a>=90)
    {
        printf("Your number is %d grade is A\n",a);
    }

    else if (a>=80)
    {
        printf("Your number is %d grade is B\n",a);
    }
    else if (a>=70)
    {
        printf("Your number is %d grade is C\n",a);
    }
    else if (a>=60)
    {
        printf("Your number is %d grade is D\n",a);
    }
    else if (a>=50)
    {
        printf("Your number is %d grade is E\n",a);
    }
    else  
    {
        printf("Your number is %d grade is F\n",a);
    }
    
    
    return 0;
}