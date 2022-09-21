#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
     cout<<"enter a number"<<endl;
     cin>>n;
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=n;j++)
		{
		if(j%2==1)
		{
			cout<<"0";
			}
			else
			{
			cout<<"1";
				}	
		}
		printf("\n");
	}
}

