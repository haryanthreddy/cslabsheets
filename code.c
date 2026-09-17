#include <stdio.h>
int main()
{
   int num1,num2;
   int product;
   printf("enter num1 and num2 \n");
   scanf("%d %d", &num1 , &num2);
   product = num1 * num2;
   printf("the product of %d and %d is %d \n" ,num1 ,num2,product);
   return 0;
}
