#include <stdio.h>
#include <string.h>
int main()
{
char src[] = "Hello";
char dest[20];
int i;
for (int j=0; j<sizeof(dest);j++)
	printf("%c",dest[j]);
printf("\n");
for ( i=0;i<strlen(src);i++) {
	dest [ i ] = src [ i ];
}
//dest[i]='\0';
printf("Copied: %s\n", dest) ;
return 0;
}
