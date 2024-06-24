/*
Write a C program that generates a symmetrical number pyramid based on a user-defined height.
The pyramid should align numbers in a pattern where each row starts and ends with 1, 
incrementing to the row number in the middle, and then decrementing back to 1.
The numbers in each row are separated by tabs for alignment. 
				1
			1	2	1
		1	2	3	2	1
	1	2	3	4	3	2	1
1	2	3	4	5	4	3	2	1	

*/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the Number : ");
    scanf("%d", &n);

    for(int i=1;i<=n;i++)
	{
        for(int j=1;j<=n-i;j++)
		{
            printf("\t");
        }
        for(int k=1;k<=i;k++)
		{
            printf("%d\t",k);
        }
        for(int k=i-1;k>=1;k--)
		{
            printf("%d\t",k);
        }
        printf("\n");
    }
}

