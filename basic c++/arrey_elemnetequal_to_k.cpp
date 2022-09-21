#include<iostream>
using namespace std;
int main()
{
int i,j,n,k,sum=0;
cout<<"enter a size of arrey"<<endl;
cin>>n;
cout<<"enter k=";
cin>>k;
int a[n];
for(i=0;i<n;i++)
{
	cin>>a[i];
}
for(i=0;i<n;i++)
{sum=0;
	for(j=i+1;j<n;j++)
	{
	sum=a[i]+a[j];
	if(sum==k)	
	{
		cout<<i<<" "<<j;
cout<<endl<<k;
		return 0;	
	}
	else{
	cout<<"element not found"<<endl;
	return 0;
	}
	}
}
}
