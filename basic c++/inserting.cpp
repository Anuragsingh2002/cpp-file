#include<iostream>
using namespace std;
int main()
{
	int i,j,n;
	cout<<"enter a number"<<endl;
	cin>>n;
	int a[n];
	cout<<"enter arrey "<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int b[n];
	for(i=1;i<n;i++)
	{ int min=0;
		if(a[i]>a[i+1])
		{ min=a[i+1];
			b[i]=min;
		}
	}
	cout<<"second arrey"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<b[i] <<endl;
	}
	return 0;
}
