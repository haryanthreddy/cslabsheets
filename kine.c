#include <stdio.h>
int main()
{
   double m,v,ke;
   printf("enter mass in kg : \n");
   scanf("%lf", &m);
   printf("enter velocity in m/s : \n");
   scanf("%lf", &v);
   ke = (0.5)*(m*(v*v));
   printf ("the value of ke is ke = %.2lf \n", ke);
   return 0;

}
