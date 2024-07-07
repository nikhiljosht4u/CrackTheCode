/* Perform Factorial of a number in C using Recursion */

#include <stdio.h>
#include <stdlib.h>
int factorial(int f)
{
	int fact = 1;
	if(f<=0)
	{
		return 1;
	}
	else
	{
		return f*factorial(f-1);
	}
	
}
int main()
{
	int f;
	printf("Enter the Number : ");
	scanf("%d",&f);
	int factor=factorial(f);
	printf("Factorial of %d is : %d",f,factor);
}
