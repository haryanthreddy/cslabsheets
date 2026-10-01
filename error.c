#include <stdio.h>
int main()
{
	char name[50];
	printf("enter the name: ");
	fgets(name,sizeof(name),stdin);
	printf("%s\n",name);
	return 0;
}
