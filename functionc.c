#include <stdio.h>
 
int main()
{
   int first, second, add, subtract, multiply;
   float divide;
 
   printf("Enter two integers\n");
   scanf("%d%d", &first, &second);
 
   add = first + second;
   subtract = first - second;
   multiply = first * second;
   divide = first / (float)second;   //typecasting
 
   printf("Sum of the numbers = %d\n", add);
   printf("Difference of the numbers = %d\n", subtract);
   printf("Multiplication of the numbers = %d\n", multiply);
   printf("Division of the numbers = %.2f\n", divide);
   printf("That is all\n"); 
   return 0;
}
