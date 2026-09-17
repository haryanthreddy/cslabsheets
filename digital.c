#include <stdio.h>
int main()
{
   int num;
   printf("enter a number: ");
   scanf("%d",&num);
   while(num>=10)
   {
      int sum=0;
      while(num>0)
      {
         sum += num%10;
         num/=10;
      }
      num = sum;
      printf("intermediate sum: %d\n",num);
   }
   printf("digital root : %d\n",num);
   return 0;
}
