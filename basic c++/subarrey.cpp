#include<iostream>
using namespace std;
int main()
{
	int i,j,sum=0,n;
	cout<<"enter size of arrey=";
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
	   cout<<a[i];
	}
	cout<<endl<<"enter number for subarrey"<<endl;
	cin>>j;
	for(i=0;i<j;i++)
	{
		sum=sum+a[i];
	}
	cout<<"sum of arrey"<<endl;
	cout<<sum;
	return 0;
}
