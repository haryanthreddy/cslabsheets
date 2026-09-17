#include <stdio.h>
int main()
{
   int num,highest=1,current,count=0;
   printf("enter the number to be converted: \n");
   scanf("%d",&num);
   while(highest*2 <=num)
   {
      highest = highest*2;
   }
   printf("binary representation: \n");
   current=highest;
   while(current>0)
   {
     if(num>=current)
     {
       printf("1");
       count++;
       num = num-current;
     }
     else
     {
     	printf("0");
     }
     current = current/2;
   }
   printf("\n");
   printf("number of 1 bits : %d\n",count);
   return 0;
}
