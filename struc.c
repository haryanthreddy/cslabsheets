#include <stdio.h>
struct student {
	int roll;
	char name[50];
	float cgpa;
};
int main()
{
	struct student a;
	struct student b;
	a.roll = 1;
	a.cgpa = 8.75f;
	printf("%.2f\n",a.cgpa);
	return 0;
	}
	
	
	
	
