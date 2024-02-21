#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *arr;
	int oddcount=0,evencount=0;
	arr=(int*)malloc(5*sizeof(int));
	printf("Enter array elements");
	for(int i=0;i<5;i++)
	{
		scanf("%d",(arr+i));
		if(*(arr+i)%2==0)
		evencount++;
		else
		oddcount++;
	}
	printf("Even numbers:%d",evencount);
	printf("\nOdd numbers:%d",oddcount);
	free(arr);
	return 0;
}