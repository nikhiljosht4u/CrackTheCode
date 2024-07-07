/* Perform Bubble Sorting */

#include <stdio.h>
int main()
{
		int n;
		printf("Enter Number of Elements : ");
		scanf("%d",&n);
		int arr[n];
		for(int i=0;i<n;i++)
		{
			printf("Enter element %d : ",i+1);
			scanf("%d",&arr[i]);
		}
		for(int i=0;i<n-1;i++)
		{
			for(int j=0;j<n-1-i;j++)
			{
				if(arr[j]>arr[1+j])
				{
					int temp = arr[j];
					arr[j] = arr[j+1];
					arr[j+1] = temp;
				}
			}
		}
		for(int i=0;i<n;i++)
		{
			printf("%d",arr[i]);
		}
}
