#include<stdio.h>
int main()
{
	
	int n ,i,a,sum=0;
	printf("enter a number\n");
	scanf("%d",&n);
	
	for(i=1;i<=10;i++)
	{
		a=n*i;
		sum=sum+a;
		
		printf("table number %d \n",a);
	}
	printf("sum of table number : %d",sum);
	return 0;
}
