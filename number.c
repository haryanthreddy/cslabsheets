#include <stdio.h>
int main()
{
   int num =0,reverse =0,digits=0,sum=0;
   printf("enter the number: \n");
   scanf("%d",&num);
   int t=num;
   while(t!=0)
   {
      sum = sum + t%10;
      digits++;
      reverse = reverse*10 + t%10;
      t/=10;
   }
   printf("digits = %d and sum = %d and reverse = %d\n", digits,sum,reverse);
   return 0;
}
