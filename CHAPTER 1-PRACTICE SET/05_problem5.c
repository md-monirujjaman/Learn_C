#include <stdio.h>

int main (){
    
    int principal,time,rate,interest;

    printf("Brother tell me the money ?\n");
    scanf("%d", &principal);
    printf("he number of years for which the money will be invested.\n");
    scanf("%d", &time);
    printf("the profit percentage? \n");
    scanf("%d", &rate);

    printf("The Calculated Simple Interest is %d", (principal*time*rate)/100);

    // interest = (principal * time * rate) / 100;

    //  printf("\n-----------------------------------\n");
    // printf("The Calculated Simple Interest is: %.2f\n", interest);
    // printf("-----------------------------------\n");

    return 0;
}