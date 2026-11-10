#include <stdio.h>
int main()
{
   int num, ret;
   printf("input a number \n");
   ret = scanf("%d",&num);
   printf("num: %d, ret: %d\n", num, ret);
   if(ret ==1)
   {
   if(num>0)
   {
   	if(num%2 == 0)
   	{
             printf("positive even\n");
   	}
   	else
   	{
   	     printf("positive odd\n");
   	}
   }
   else if (num == 0)
   {
       printf("zero\n");
   }
   else
   {
       if(num%2 == 0)
       {
            printf("negative even\n");
       }
       else
       {
            printf("negative odd\n"); 
       }
   }
   }
   else
   {
   	printf("invalid input \n");
   }
	return 0;
}
