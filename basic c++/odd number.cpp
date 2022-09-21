#include<stdio.h>
int main()
{
	
	int n ,i,a,sum=0;
	printf("enter a number\n");
	scanf("%d",&n);
	
	for(i=1;i<=10;i++)
	{
		a=n*i-1;
		sum=sum+a;
		
		printf("odd number %d \n",a);
	}
	printf("sum of odd number : %d",sum);
	return 0;
}
