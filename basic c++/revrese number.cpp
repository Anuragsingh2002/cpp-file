#include<stdio.h>
int main()
{
	int rem,rev=0,n,i,j;
	printf("enter number\n");
	scanf("%d",&j);
	for(;j!=0;)
	{
		rem=j%10;
		j=j/10;
		rev=(rev*10)+rem;
	}
	printf("%d",rev);
	return 0;
}
