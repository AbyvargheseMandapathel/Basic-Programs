// palindrome
 #include <stdio.h>
 int main () {
     int number , original_number, reverse_number = 0 , remainder ;
     
     printf("Enter the number");
     scanf("%d", &number);
     
     original_number = number;
     
     while(number !=0) {
         remainder = number%10;
         reverse_number = reverse_number*10 + remainder;
         number /= 10;
         //number = number /10;
     }
     if (original_number == reverse_number) {
         printf("Number is palindrome");
     }
     else {
         printf("Number is not palindrome");
     }
 }
