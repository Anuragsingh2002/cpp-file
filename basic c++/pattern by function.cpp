#include<stdio.h>
int pattern1(int n);
int pattern1(int n)
	{
	int i,j;
for(i=1;i<n;i++)
{
	for(j=0;j<i;j++)
	{
	printf("%d",i)	;
	}
	printf("\n");
}
 
return 0;
	
}
int pattern2(int n)
{ int i,j;
	for(i=1;i<=n;i++)
	{
	for(j=1;j<=n;j++)
	{ 
	if(j<=n-i)	
	{
		printf(" ");
	}
	else
	{
		printf("%d ",i);
	}
    }
	printf("\n");	
	} 
}
int pattern3(int n)
{ int i,j;
	for(i=1;i<=n;i++)
	{
	for(j=1;j<=n;j++)
	{ 
	if(j<=n-i)	
	{
		printf(" ");
	}
	else 
	{
		printf("%d",i);
	}
    }
	printf("\n");	
	} 
}
 int main()
 {
 	int n;
 	printf("enter number\n");
 	scanf("%d",&n);
 	pattern2(n);
 	printf("second pattern\n");
 		pattern1(n);
 	printf("third pattern\n");	
 	pattern3(n);
 		
 
 	return 0;
 }
