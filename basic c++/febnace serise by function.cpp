#include<iostream>
using namespace std;  
int feb(int n)
{
	int t1,t2,next;
	
	t1=0;
		t2=1;
	for(int i=0;i<=n;i++)
	{
			cout<<t1;
		next=t1+t2;
		t1=t2;
		t2=next;
		
	}

	
}
int main()
{ int n;
cin>>n;
	int t1=0,t2=1,next=t1+t2;
	feb(n);
}
