#include <stdio.h>
int main()
{
   int choice,size;
   printf("menu: \n");
   printf("1. right triangle \n");
   printf("2. inverted right triangle\n");
   printf("3. square\n");
   printf("please select pattern: \n");
   scanf("%d",&choice);
   printf("please enter the size: \n");
   scanf("%d",&size);
   switch(choice)
   {
       case 1:
       	       for(int i=0;i<size;i++)
       	       {
       	          for(int j=0;j<i;j++)
       	          {
       	             printf("*");
       	          }
       	          printf("\n");
       	       }
       	       break;
        case 2:
        	for(int i=size;i>0;i--)
       	       {
       	          for(int j=0;j<i;j++)
       	          {
       	             printf("*");
       	          }
       	          printf("\n");
       	       }
       	       break;
       	case 3:
       		for(int i=0;i<size;i++)
       	       {
       	          for(int j=0;j<size;j++)
       	          {
       	             printf("*");
       	          }
       	          printf("\n");
       	       }
       	       break;
       	default :
       		printf("invalid choice\n");
   }
   return 0;
}
