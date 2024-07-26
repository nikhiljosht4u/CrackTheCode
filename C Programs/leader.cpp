/* Given an array arr of n positive integers, your task is to find all the leaders in the array. 
An element of the array is considered a leader if it is greater than all the elements on its right side or 
if it is equal to the maximum element on its right side. The rightmost element is always a leader.*/

#include <stdio.h>
int main()
{
	int n;
	printf("Enter size of the Array : ");
	scanf("%d",&n);
	int arr[n];

	for(int i=0;i<n;i++)
	{
        scanf("%d",&arr[i]);
	}
	int max=arr[n-1];
	printf("__________ OUTPUT VALUES __________\n");
	printf("%d\n",max);
	for(int i=n-2;i>0;i--)
	{
		
		if(max<arr[i])
		{
			max=arr[i];
			printf("%d\n",max);
		}
	}
}

