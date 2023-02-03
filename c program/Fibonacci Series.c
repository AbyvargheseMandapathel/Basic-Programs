// Fibonacci Series in C
#include <stdio.h>

int main() {
    // Write C code here
    int next_term , first_term, second_term , iterations, i;
    first_term = 0;
    second_term = 1;
    
    printf("enter the no of elements needed");
    scanf("%d" , &iterations);
    
    for( i =1 ; i<= iterations ; i++) {
        printf("%d \n",first_term);
        next_term = first_term + second_term;
        first_term = second_term;
        second_term = next_term;
    }
    return 0;
}


