#include <stdio.h>
int main()
{
   double income,rental_income,lease,tax,land_income,gross;
   printf("enter your income ,rental_income ,lease,land_income: \n");
   scanf("%lf %lf %lf %lf" , &income ,&rental_income,&lease,&land_income);
   gross = income + rental_income+ lease+land_income ;
   if (gross<= 25000){
   	tax = 0.0;
   }
   else if (gross> 25000 && gross<=50000){
   	tax = (gross - 25000)*0.05;
   }
   else if (gross >50000 && gross <= 100000){
   	tax = (25000*0.05)+(gross -50000)*0.20;
   }
   else{
   	tax = (25000*0.05)+(50000*0.20)+(gross -100000)*0.3;
   }
   printf("total income tax to pay: %.2lf \n", tax);
   return 0;
 
}


