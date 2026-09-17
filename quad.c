#include <stdio.h>
#include <math.h>
int main()
{
   int a,b,c;
   double x1,x2,d;
   printf("enter values of a,b,c : ");
   scanf("%d %d %d", &a,&b,&c);
   d = (b*b - (4*a*c));
   if (d>=0){
   x1 = ((-b + sqrt(d))/(2*a));
   x2 =  ((-b - sqrt(d))/(2*a));
   printf("value of x1 = %.2lf and value of x2 = %.2lf \n", x1,x2);
   }
   else{
   printf("roots are imaginary\n");
}
   return 0;

}
