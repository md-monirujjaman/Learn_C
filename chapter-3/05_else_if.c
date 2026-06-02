#include <stdio.h>

int main() {
    int marks = 75; // Enter your marks here

    if (marks >= 80) {
        printf("Your Grade: A+\n");
    } 
    else if (marks >= 70) {
        printf("Your Grade: A\n"); // Since marks = 75, this condition will be true
    } 
    else if (marks >= 60) {
        printf("Your Grade: B\n");
    } 
    else {
        printf("Your Grade: F (Fail)\n");
    }

    return 0;
}