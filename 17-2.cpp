#include <stdio.h>
int main()
{
    int age;
    printf("input age\n");
    scanf("%d",&age);
    if(age>0)
    {
        if(age<5)
        {
            printf("ticket price is free\n");
        }
        else if(age>=5 && age<=12)
        {
            printf("ticket price is rs.120\n");
        }
        else if(age>=13 && age<=59)
        {
            printf("ticket price is rs.200\n");
        }
        else
        {
            printf("ticket price is rs.150\n");
        }
    }
    else
    {
        printf("invalid age\n");
    }
    return 0;
}
