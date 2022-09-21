#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
	cout<<"enter size of matrix"<<endl;
	cin>>n;
	int a[n][n];
	cout<<"enter element of matrix"<<endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"matrix"<<endl;
		for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<a[i][j];
		}
		cout<<endl;
	}
	cout<<"identiy matrix"<<endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
				cout<<"1";
			}
			else
			{
				cout<<"0";
			}
		}
		cout<<endl;
	}
}
