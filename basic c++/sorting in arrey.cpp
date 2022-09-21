#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	int temp;
	for(int i=0;i<=n-1;i++)
{ cin>>arr[i];
	for(int j=0;j<=n;j++)
	{ 
		if(arr[i]>arr[j+1])
		{
			int temp;
			temp=arr[i];
			arr[i]=arr[j+1];
			arr[j+1]=temp;
			
			
		}
	
	}
}
	for(int i=0;i<n;i++)
		{
			cout<<arr[i]<<" ";
		}
		cout<<endl;
return 0;
	
}
