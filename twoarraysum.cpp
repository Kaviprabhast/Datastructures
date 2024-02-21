#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *arr,*arr1,*arrsum;
	int i;
	arr=(int*)malloc(5*sizeof(int));
	arr1=(int*)malloc(5*sizeof(int));
	arrsum=(int*)malloc(5*sizeof(int));
	printf("Enter first array elements:");
	for(int i=0;i<5;i++)
	{
		scanf("%d",(arr+i));
	}
	printf("Enter second array elements:");
	for(int i=0;i<5;i++)
	{
		scanf("%d",(arr1+i));
	}
		for(int i=0;i<5;i++)
	{
		*(arrsum+i) = *(arr+i) + *(arr1+i);
	}
	printf("Sum of arrays:");
	for(int i=0;i<5;i++)
	{
	printf("%d ",*(arrsum+i));
}
free(arr);
free(arr1);
free(arrsum);
return 0;
	
}