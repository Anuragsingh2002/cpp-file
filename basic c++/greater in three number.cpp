#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter three number\n");
	scanf("%d%d%d",&a,&b,&c);
	a>b&&a>c?printf("a is greater\n"):b>c&&b>a?printf("b is a greater number"):printf("c is a greater number");
//	c>a&&c>b?printf("c is a greater number\n"):printf("b is agreater number");
	return 0;
}
