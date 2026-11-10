#include <stdio.h>
#include <math.h>
double power(double base,double exponent)
{
    double product =1.0;
    for(int i=0;i<exponent;i++)
    {
        product *= base;
    }
    return product;
}
double evaluateterm(double coefficient,double x,int exponent)
{
    return coefficient*power(x,exponent);
}
double evaluatepolynomial(double a,double b,double c, double d,double x)
{
    double term1 = evaluateterm(a,x,3);
    double term2 = evaluateterm(b,x,2);
    double term3 = evaluateterm(c,x,1);
    double term4 = evaluateterm(d,x,0);
    return term1 + term2 + term3 + term4;
}
int main()
{
    double a,b,c,d;
    double x;
    printf("---Welcome to Polynomial evaluator----\n");
    printf("enter the coefficients a,b,c,d :\n");
    if (scanf("%lf %lf %lf %lf", &a, &b, &c, &d) != 4) {
        printf("Invalid input for coefficients.\n");
        return 1;
    }
    printf("Enter the value of x: ");
    if (scanf("%lf", &x) != 1) {
        printf("Invalid input for x.\n");
        return 1;
    }
    double result = evaluatepolynomial(a, b, c, d, x);
    printf("f(%.lf) = %.lf\n", x, result);
    return 0; 
}