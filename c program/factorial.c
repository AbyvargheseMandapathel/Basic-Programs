// factorial

#include <stdio.h>

int main() {
    int number , factorial  = 1 , i;
    printf("enter the number:");
    scanf("%d" , &number);
    for (i = 1; i<= number; i++) {
        factorial = factorial * i;
    }
        printf("The Factorial of the number is:%d", factorial);
    
}
