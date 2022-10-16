#include<stdio.h>
int main()
{
int array[1000],m,n,back,i;
printf("enter number of element in array\n");
scanf("%d",&n);
printf("enter %d element \n",n);
for(m=0;m<n;m++)
scanf("%d",&array[m]);
printf("enter the location where you want to insert element\n");
scanf("%d",&back);
printf("enter the value to insert\n");
scanf("%d",&i);
for(m=n-1;m>=i-1;m--)
array[m+1]=array[m];
array[back-1]=i;
printf("resultant array is \n");
for(m=0;m<=n;m++)
printf("%d\n",array[m]);
return 0;
}
