#include<stdio.h>

int main()
{
	int x;
	int y;
	int z;
	
	printf("Enter two values to add > "); scanf(" %i", &x);
	printf(" > "); scanf(" %i", &y);
	
	z = x + y;
	
	printf("%i + %i = %i\n", x, y, z);
	
	z = 0;
	y = 0;
	x = 0;
	
	printf("Enter two values to > "); scanf(" %i", &x);
	printf(" > "); scanf(" %i", &y);
	
	z = x + y;
	
	printf("%i + %i = %i\n", x, y, z);
	
	z = 0;
	y = 0;
	x = 0;
	
	return 0;
}


