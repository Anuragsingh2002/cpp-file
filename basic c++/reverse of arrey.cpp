#include<stdio.h>
int main()
{
	int a;
	int arr[a];
	printf("enter a size of arrey\n");
	scanf("%d",&a);
	for(int i=0;i<a;i++)
	{
		scanf("%d",&arr[i]);
		
	}
	for(int j<=a-1;j>0;j--)
	{
		printf("%d\n",arr[j]);
	}
	return 0;
}
