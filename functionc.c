#include <stdio.h>
 
int main()
{
   int first, second, add, subtract, multiply, rem;
   float divide;
 
   printf("Enter two integers\n");
   scanf("%d%d", &first, &second);
 
   add = first + second;
   subtract = first - second;
   multiply = first * second;
   divide = first / (float)second;   //typecasting
   rem = first % second;
 
   printf("Sum of the numbers = %d\n", add);
   printf("Difference of the numbers = %d\n", subtract);
   printf("Multiplication of the numbers = %d\n", multiply);
   printf("Division of the numbers = %.2f\n", divide);
<<<<<<< HEAD
   printf("That is all\n"); 
=======
   printf("Remainder = %d\n", rem);
 
>>>>>>> testing
   return 0;
}
