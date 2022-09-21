
 #include<stdio.h>
int fact(int n);
int fact(int n)
{ int fact=1;
	for(int i=1;i<=n;i++)
	{ 
	 	fact=fact*i;
	 
	}
	printf("factorial %d",fact);
}
int main()
{
	int n;
	printf("enter number\n");
	scanf("%d",&n);
	fact(n);
	return 0;
}
