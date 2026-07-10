#include <stdio.h>

int main()
{
    int salary1;
      
    printf("Bro, first tell me your salary, then I will decide how much tax you pay\n");
    scanf("%d", &salary1);

    // ১. বেতন ২৫০০০০ এর কম বা সমান হলে (০% ট্যাক্স)
    if (salary1 <= 250000)
    {
        printf("Your salary is %d which is under 250,000 taka. So your payable tax is 0\n", salary1);
    }
    // ২. বেতন ২৫০০০০ এর বেশি এবং ৫০০০০০ এর কম হলে (২০% ট্যাক্স) [AND Gate ব্যবহার]
    else if (salary1 > 250000 && salary1 < 500000)
    {
        printf("Your salary is %d which is between 250,000 and 500,000 taka. So your payable tax is %d\n", salary1, (salary1 * 20) / 100);
    }
    // ৩. বেতন ৫০০০০০ এর বেশি বা সমান এবং ১MDA০০০০০ এর কম হলে (৩০% ট্যাক্স)
    else if (salary1 >= 500000 && salary1 < 1000000)
    {
        printf("Your salary is %d which is between 500,000 and 1,000,000 taka. So your payable tax is %d\n", salary1, (salary1 * 30) / 100);
    }
    // ৪. উপরের কোনোটিই না হলে, অর্থাৎ ১MDA০০০০০ বা তার বেশি হলে (৪০% ট্যাক্স)
    else 
    {
        printf("Your salary is %d which is above 1,000,000 taka. So your payable tax is %d\n", salary1, (salary1 * 40) / 100);
    }

    return 0;
}