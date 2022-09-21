#include<iostream>
using namespace std;
int main()
{
	int r,c,i,j;
	cout<<"enter row"<<endl;
	cin>>r;
	cout<<"enter column"<<endl;
	cin>>c;
	int a[r][c];
	int b[r][c];
	cout<<"enter element of matrix"<<endl;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"first matrix"<<endl;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<a[i][j];
		}
		cout<<endl;
	}
		cout<<"enter element of matrix"<<endl;
		for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cin>>b[i][j];
		}
	}
	cout<<"second matrix matrix"<<endl;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<b[i][j];
		}
		cout<<endl;
	}
	int x[r][c];
	cout<<"addittion of matrix"<<endl;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			x[i][j]=a[i][j]+b[i][j];
		}
	}
		for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<x[i] [j];
		}
		cout<<endl;
	}
	return 0;
}
