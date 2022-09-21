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
	cout<<"matrix "<<endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<a[i][j];
		}
		cout<<endl;
	}
	
int	b[n][n];
cout<<"transpose"<<endl;
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
		cout<<a[j][i];
		
	}
	cout<<endl;
	
}
if(a[i][j]==a[j][i])
		{
			cout<<"symatrix matrix"<<endl;
		}
		else
		{
			cout<<"non sysmatrix matrix"<<endl;
		}
	
}
