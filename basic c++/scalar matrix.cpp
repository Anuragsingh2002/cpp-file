#include<iostream>
using namespace std;
int main()
{
	int r,c,i,j;
	cout<<"print scalar matrix"<<endl;
	cout<<"enter row"<<endl;
	cin>>r;
	cout<<"enter column"<<endl;
	cin>>c;
	int a[r][c];
	cout<<"scalar matrix"<<endl;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
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
