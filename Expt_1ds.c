#include<stdio.h>
int main()
{
	int arr[5],i;
	arr[0]=10;
	arr[1]=20;
	arr[2]=30;
	arr[3]=40;
	arr[4]=50;
	printf("value in array[0]:%d",arr[0]);
	printf("value in array[1]:%d",arr[1]);
	printf("value in array[2]:%d",arr[2]);
	printf("value in array[3]:%d",arr[3]);
	printf("value in array[4]:%d",arr[4]);
	printf("\n");
	for(i=0;i<5;i++)
	{
		printf("value in array[%d]:%d\n",i,arr[i]);
	}
	return 0;
}