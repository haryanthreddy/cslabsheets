#include <stdio.h>
int main()
{
    double a,b,c;
    printf("enter the sides of the traingle to be classified\n");
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a+b > c && b+c > c && c+a > b)
    {
        if(a==b==c)
        {
            printf("the triangle is equilateral\n");
        }
        else if(a==b || b==c || c==a)
        {
             printf("the triangle is isoceles\n");
        }
        else
        {
             printf("the triangle is scalene \n");
        }
    }
    else 
    {
    	     printf("the triangle is invalid\n"); 
    }
    return 0;
}


