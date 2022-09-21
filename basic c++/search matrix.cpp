#include<iostream>
using namespace std;
int main()
{
	int i,j,row,col,max=0;
	cout<<"enter row=";
	cin>>row;
	cout<<endl<<"enter col=";
	cin>>col;
	int a[row][col];
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cin>>a[i][j];
		}
	}
		for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
		     cout<<a[i][j];
		     
		}
		cout<<endl;
	}
		for(i=0;i<row;i++)
	{
		for(j=i;j<col;j++)
		{
		for(k=0;k<n;k++)
		{
			
		}
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cout<<a[i][j];
		}
		cout<<endl;
	}
	return 0;
}
