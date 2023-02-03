//Prime Numbers in C

#include <stdio.h>
int main() {
    int iterations, number ,flag=0;
    
    printf("enter the number to check");
    scanf("%d",&number);
    
    for (iterations=2;iterations<=number/2;iterations++) {
        if (number % iterations == 0){
            flag =1;
        }
    }
    if (number == 1) {
        printf("Number is not prime");
    }
    else if (number == 0) {
        printf("Number is neither prime not nor");
    }
    else if (flag == 0) {
        printf("%d is   prime", number);
    }
    else {
        printf("%d is not   prime", number);
    }
    }

