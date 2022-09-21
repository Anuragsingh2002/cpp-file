#include<stdio.h>
int main()
{
	int a,i,j,sum=0,k,fact;
	printf("enter a number=");
	scanf("%d",&a);
	int n=a;
	while(n>0)
	{
		i=n%10;
		j=i;
		n=n/10;
		for( int b=1;b<=j;b++)
		{
			fact=fact*b;
		}
		sum=sum+fact;
		
	}
	printf("%d\n",sum);
	if(sum==a)
	{
		printf("this is strong number\n");
	}
	else
	{
		printf("this is not a strong number");
	}
	return 0;
}
	
	

