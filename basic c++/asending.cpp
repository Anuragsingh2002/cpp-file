#include<iostream>
using namespace std;
int main()
{
	int i,j,n,temp=0;
	cout<<"enter size arrey"<<endl;
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
	 { temp=a[i];
	 a[i]=a[j];
	 a[j]=temp;
	 	
	 }
	 	
	}
	cout<<endl;
	for(j=0;j<n;j++)
	{
		cout<<a[j];
	}
	
}
