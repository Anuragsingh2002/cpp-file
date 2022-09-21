//wap a program for cheke prime number.
#include<stdio.h>
int main()
{
	int n,div=2,num=0;
	printf("enter n\n");
	scanf("%d",&n);
	for(;div<n;div++)
	{
		if(n%div==0)
		{
			num=1;
		}
	}
	if(num==0)
	{
		printf("prime number");
		
	}
	else
	{
		printf("not prime number");
	}
	return 0;}
