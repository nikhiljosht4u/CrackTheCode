#include <stdio.h>
int main()
{
	//Given an array, find the contiguous subarray with the largest sum
	/* HINT: Use Kadane's Algorithm.
	Your program only needs to return the sum of the values, not the indexes of the subarray.
	*/
	
	int n;
	printf("Enter Number of Elements to be Inserted to the array : ");
	scanf("%d",&n);
	int arr[n],m;
	m=n/2;
	int sum_arr[m];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0,j=0;i<n,j<m;i++,j++)
	{
		sum_arr[j]= arr[i]+arr[i+1];
	}
	for( int i=0;i<m;i++)
	{
		if(sum_arr[i]>sum_arr[i+1])
		{
			int temp = sum_arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=temp;
		}
	}
	printf("%d",sum_arr[m-1]);
}
