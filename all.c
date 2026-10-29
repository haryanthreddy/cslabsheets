#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
int main()
{
	char s[100];
	int letters=0,digits =0,spaces=0,vowels =0,words =0;
	printf("Enter a line: \n");
	fgets(s,sizeof(s),stdin);
	s[strcspn(s,"\n")] = '\0';
	int characters = strlen(s);
	bool inword =false;
	for(int i =0;i<strlen(s);i++)
	{
		if(isalpha(s[i]))
		{
			letters++;
		}
		if(isdigit(s[i]))
		{
			digits++;
		}
		if(isspace(s[i]))
		{
			spaces++;
		}
		if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
		{
			vowels++;
		}
		if (isspace(s[i])) 
		{
    		inword = false; 
    	} 
    	else if (!inword) 
    	{
    		inword = true; 
    		words++;
		}
	}
	printf("%d\n",characters);
	printf("%d\n",letters);
	printf("%d\n",digits);
	printf("%d\n",spaces);
	printf("%d\n",vowels);
	printf("%d\n",words);
	return 0;
}
