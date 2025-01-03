#include<stdio.h>
void main()
{
int n, sum=0, Arr[10];
printf("enter the number of elements:");
scanf("%d",&n);
printf("enter %d elements:\n",n);
for(int i=0;i<n;i++)
scanf("%d",&Arr[i]);
for(int i=0;i<n;i++)
sum=sum+Arr[i];
printf("sum=%d\n",sum);
}
