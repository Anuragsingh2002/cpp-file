//wap to print all prime number till n
#include<stdio.h>
int main()
{
	int n,div=2,num=0;
	printf("enter n\n");
	scanf("%d",&n);
	for(;div<=n;div++)
	{
		if(n%div==0)
		{
		num=num+1;
			
		}
		else if(num==0)
		{
			printf("%d",div);
		}
		
	}
	return 0;
}
