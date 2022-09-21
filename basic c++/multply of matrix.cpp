#include<stdio.h>
int main()
{
	int r ,c,i,j,z,y;
	printf("enter row and column \n");
	scanf("%d",&r);
	scanf("%d",&c);
	printf("enter row and column \n");
	scanf("%d",&y);
	scanf("%d",&z);
	
	int a[10][10];
	int b[10][10];
	int x[10][10];
	if(r==z)
	{
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
	{
	scanf("%d",&a[i][j]);	
	}
	
	}
	printf("metrix a\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
	{
	printf("%d",a[i][j]);	
	}
	printf("%d \n");
	}
}
	
return 0;
}

