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
	
	printf("Enter two values to Subtract > "); scanf(" %i", &x);
	printf(" > "); scanf(" %i", &y);
	
	z = x - y;
	
	printf("%i - %i = %i\n", x, y, z);
	
	z = 0;
	y = 0;
	x = 0;
	
	printf("Enter two values to Multiply > "); scanf(" %i", &x);
	printf(" > "); scanf(" %i", &y);
	
	z = x * y;
	
	printf("%i * %i = %i\n", x, y, z);
	
	z = 0;
	y = 0;
	x = 0;
	
	x = 0;
	y = 0;
	return 0;
}

//This is the line causing issue in the conflict branch

//This is the second line causing issue in the <master> branch
<<<<<<< HEAD
=======

>>>>>>> conflict
