#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *arr;
	int sum=0;
	arr=(int*)malloc(5*sizeof(int));
	printf("Enter array elements");
	for(int i=0;i<5;i++)
	{
		scanf("%d",(arr+i));
    	sum=sum + *arr+i;	
	}
	printf("Sum of array elements:%d",sum);
	free(arr);
	return 0;
}