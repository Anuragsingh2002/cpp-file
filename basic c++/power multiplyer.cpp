#include<stdio.h>
int main()
{
	int num,i,sum=0,pow,a,b;
	printf("enter a number");
	scanf("%d",&num);
	printf("enter a power");
	scanf("%d",&pow);
	for(i=1;i<=pow;i++)
	{
	
	a=num*num;
	sum=sum+a;
	printf("%d\n",sum);
	}
	printf("power of %d=%d\n",num,sum);
	
	return 0;
	
}
