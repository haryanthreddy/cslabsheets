#include <stdio.h>
 int calculate_next_battery (int current_battery , int current_solar ) {
 return current_battery + ( current_solar / 2) ;
 }

 int calculate_next_solar (int current_battery , int current_solar ) {
 return current_solar - ( current_battery / 10) ;
 }

 int main () {
 int solar_power = 100;
 int battery_storage = 50;

 printf (" Initial - Solar : %d, Battery : %d\n", solar_power ,battery_storage ) ;

 // Simulate 1 hour of grid activity
 solar_power = calculate_next_solar ( battery_storage , solar_power ) ;
 battery_storage = calculate_next_battery ( battery_storage , solar_power ) ;
 

 printf (" After 1 Hour - Solar : %d, Battery : %d\n", solar_power ,battery_storage ) ;

 return 0;
 }
