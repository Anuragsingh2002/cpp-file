#include<iostream>
using namespace std;
int pattren1(int n) ;
int pattren1(int n)
{
	int i,j;
		for(i=1;i<=n;i++)
	{
			for(j=1;j<=n;j++)
		//	cout<<i<<endl;
			{
			if(i==1 || i==n)
			{
				cout<<"1"; 
			}
			else if(i==1 || i==n || j==1||j==n)
			{
				cout<<"1";
			}
			
			else
			{
				cout<<"0";
			}
			
			}
			cout<<endl;

int main()
{
	int n,i,j;
	cout<<"enter number"<<endl;
	cin>>n;
	int a=(n+1)/2;
	cout<<a<<endl;
	for(i=1;i<n;i++)
	{
			for(j=1;j<=n;j++)
		//	cout<<i<<endl;
			{
				if (i==a & i==j)
				{
					cout<<"0";
				}
				 else
				{
					cout<<"1";
				}
			}
			cout<<endl;
	}
	cout<<"second pattern"<<endl;
	pattren1(n); 
	cout<<"third pattern"<<endl;
		for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
		
		if(i==n/2 || j==n/2 )
		 {
			cout<<"0";
		 }
		else
		{
		
		cout<<"1";
    	}
    	cout<<endl;
	}
	return 0;
   }
}
