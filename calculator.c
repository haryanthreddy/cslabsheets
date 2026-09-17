#include <stdio.h>
#include <math.h>

  double add(double a,double b)
  {
  	return a+b;
  }
  double subtract(double a,double b)
  {
  	return a-b;
  }
  double multiply(double a,double b)
  {
  	return a*b;
  }
  double divide(double a,double b)
  {
  	if(b==0)
  	{
  		printf("invalid input\n");
  		return 0;
  	}
  	else{
  	return a/b;
  	}
  }
  double sine(double x)
  {
  	return sin(x);
  }
  double cosine(double x)
  {
  	return cos(x);
  }
  double tangent(double x)
  {
  	return tan(x);
  }
  double power(double x, double y)
  {
     	return pow(x,y);
  }
  double root(double x)
  {
  	if(x<0)
	{
	   printf("invalid input\n");
	   return 0;
	}
	else
	{
	   return sqrt(x);
	}
  }
  double exponent(double x)
  {
     if(x==0)
     {
         printf("invalid input\n");
         return 0;
     }
     else
     {
         return exp(x);
     }
  }
  double logarithm(double x)
  {
      if(x<=0)
      {
          printf("invalid input\n");
          return 0;
      }
      else
      {
         return log(x);
      }
  }
  void arithmaticmenu()
  {
     int choice =0;
     while(choice !=5)
     {
     	printf("arithmatic menu\n");
     	printf("1.addition (a+b)\n");
     	printf("2.subtraction (a-b)\n");
     	printf("3.multiplication (a*b)\n");
     	printf("4.division (a/b)\n");
     	printf("enter your choice\n");
     	scanf("%d",&choice);
     	if(choice>=1 && choice<=4)
     	{
     	    double num1, num2;
            printf("Enter first number: ");
            scanf("%lf", &num1);
            printf("Enter second number: ");
            scanf("%lf", &num2);
            if(choice==1)
            {
            	printf("result:%lf\n",add(num1,num2));
            }
            else if(choice ==2)
            {
            	printf("result:%lf\n",subtract(num1,num2));
            }
            else if(choice ==3)
            {
               printf("result:%lf\n",multiply(num1,num2));
            }
            else if(choice ==4)
            {
               printf("result:%lf\n",divide(num1,num2));
            }
     	}
     	else if(choice !=5)
     	{
     	    printf("invalid choice ,try again\n");
     	}
     }
  }
  void trigmenu()
  {
     int choice =0;
     while(choice!=4)
     {
        printf("1.sine (sin(x))\n");
        printf("2.cosine (cos(x))\n");
        printf("3.tangent (tan(x))\n");
        printf("enter your choice\n");
        scanf("%d",&choice);
        if(choice>=1 && choice<=3)
     	{
     	    double angle;
            printf("enter angle in radians");
            scanf("%lf", &angle);
            if(choice==1)
            {
            	printf("result:%lf\n",sine(angle));
            }
            else if(choice ==2)
            {
            	printf("result:%lf\n",cosine(angle));
            }
            else if(choice ==3)
            {
               printf("result:%lf\n",tangent(angle));
            }
     	}
     	else if(choice !=4)
     	{
     	    printf("invalid choice ,try again\n");
     	}
     }
  }
  void exponentmenu()
  {
     int choice =0;
     while(choice !=5)
     {
     	printf("arithmatic menu\n");
     	printf("1.power (x^y)\n");
     	printf("2.square root (sqrt(x))\n");
     	printf("3.exponential (e^x)\n");
     	printf("4.logarithm (log(x)\n");
     	printf("enter your choice\n");
     	scanf("%d",&choice);
     	if(choice>=1 && choice<=4)
     	{
     	    double num1, num2;
            printf("Enter first number: ");
            scanf("%lf", &num1);
            printf("Enter second number: ");
            scanf("%lf", &num2);
            if(choice==1)
            {
            	printf("result:%lf\n",power(num1,num2));
            }
            else if(choice ==2)
            {
            	printf("result:%lf\n",root(num1));
            }
            else if(choice ==3)
            {
               printf("result:%lf\n",exponent(num1));
            }
            else if(choice ==4)
            {
               printf("result:%lf\n",logarithm(num1));
            }
     	}
     	else if(choice !=5)
     	{
     	    printf("invalid choice ,try again\n");
     	}
     }   
  }
  void mainmenu()
  {
     int choice =0;
     while(choice!=4)
     {
         printf("1.basic arithmatic menu\n");
         printf("2.trignometry menu\n");
         printf("3.exponential menu\n");
         printf("4.exit\n");
         printf("enter your choice\n");
         scanf("%d",&choice);
         if(choice==1)
         {
             arithmaticmenu();
         }
         else if(choice==2)
         {
             trigmenu();
         }
         else if(choice ==3)
         {
             exponentmenu();
         }
         else if(choice == 4)
         {
             printf("exiting the calculator,bye!\n");
         }
         else
         {
             printf("invalid option\n");
         }
     }
  }
  int main() {
    mainmenu();
    return 0;
}
