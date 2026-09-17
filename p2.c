#include <stdio.h>
int main()
{
    int length,width,area,perimeter;
    printf("enter length and width \n");
    scanf("%d %d", &length , &width);
    area = length*width ;
    perimeter = 2*(length + width);
    printf ("the area is %d \n the perimeter is %d \n", area ,perimeter);
    return 0;
}
