/* This program is to sort the array elements using insertion sort*/
#include<stdio.h>
#include<stdlib.h>
void insertion_sort(int [],int);
int main()
{
	int a[20],n,i;
	printf("\n Enter the number of integers:");
	scanf("%d",&n);
	printf("\n Enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n The elements before sort:\n");
	for(i=0;i<n;i++)
	{
		printf("\n %d",a[i]);
	}
	insertion_sort(a,n);
	printf("\n The elements after sort:\n");
	for(i=0;i<n;i++)
	{
		printf("\n %d",a[i]);
	}
	return(0);
}
void insertion_sort(int x[],int n)
{
	int i,j,t;
	/* performing sorting */
	for(i=1;i<=(n-1);i++)
	{
		t=x[i];
		/* compare 't' against all elements in sorted list and shift them 
		1 position to the right if x[j]>t */
		for(j=i-1;(j>=0 && x[j]>t);j--)
		{
			x[j+1]=x[j];
		}
		x[j+1]=t;
	}
}