/*Write a C program that calculates the factorial of a given number.
The program should prompt the user to enter a number, then calculate and print the factorial of that number.*/
#include <stdio.h>
int main()
{
	int num,factorial=1;
	printf("Enter number : ");
	scanf("%d",&num);
	for(int i=1;i<=num;i++)
	{
		factorial = factorial*i;
	}
	printf("The factorial of %d is : %d",num,factorial);
}
