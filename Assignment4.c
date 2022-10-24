#include<stdio.h>
int main()
{
	int matrix[3][2],i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter a[%d][%d]:",i+1,j+1);
			scanf("%d",&matrix[i][j]);
		}
	}
	printf("YOUR MATRIX IS:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",matrix[i][j]);
		if(j==1)
			printf("\n");
		}
		
	}
	return 0;
}
