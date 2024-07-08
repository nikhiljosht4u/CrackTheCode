/* Perform Insertion Sort in C */

#include <stdio.h>
int main()
{
	int n;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter all the values : ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=1;i<n;i++)
	{
		int j=i-1;
		int temp = arr[i];
		while(j>=0 && arr[j]>temp)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=temp;
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
