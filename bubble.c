for (int i = 0; i < n - 1; i ++) {
2 for (int j = 0; j < n - 1 - i ; j ++) {
3 if ( numbers [ j ] > numbers [ j + 1]) {
4 int temp = numbers [ j ];
5 numbers [ j ] = numbers [ j + 1];
6 numbers [ j + 1] = temp ;
7 }
8 }
9 }
