#include <stdio.h>
int main()
{
    int dist,dist_in_meters,dist_in_centimeters;
    printf("enter dist in km \n");
    scanf("%d",&dist);
    dist_in_meters = dist*1000;
    dist_in_centimeters = dist*100000;
    printf("dist in meters is %d and dist in centimeters is %d \n" , dist_in_meters , dist_in_centimeters);
    return 0;
}
