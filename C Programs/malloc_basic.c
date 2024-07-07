/*  Use Malloc() to create an array and print the values stored in them  */

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n;
	printf("Enter size of array : ");
	scanf("%d",&n);
	int *ptr = (int*)malloc(n*sizeof(int));
	printf("Enter %d elements below : ",n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",ptr+i);
	}
	printf("Values present in the Array of Size %d are : \n",n);
	for(int i=0;i<n;i++)
	{
		printf("%d\n",*(ptr+i));
	}
}
