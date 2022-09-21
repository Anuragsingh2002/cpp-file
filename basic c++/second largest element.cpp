#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
	cout<<"enter size of arrey"<<endl;
	cin>>n;
	int a[n];
	
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
		for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		if(a[i]>a[j])
		{
			int temp;
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
		
	}
	cout<<a[n-2];
}
