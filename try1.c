# include <stdio.h>

 int accumulator = 10;

 int transform ( int n ) {
 accumulator += n ;
 n = n * 2;
 accumulator -= n ;
 return n + accumulator ;
 }

 int main () {
 int n = 4;
 accumulator += transform ( n ) ;
 printf ("%d, %d\n", n , accumulator ) ;

 n = transform ( accumulator / 5) ;
 printf ("%d, %d\n", n , accumulator ) ;
 return 0;
 }
