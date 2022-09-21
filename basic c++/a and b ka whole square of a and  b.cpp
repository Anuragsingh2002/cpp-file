#include<iostream>
using namespace std;
int square();
int square(int a,int b)
{
	int ans=0;
	ans=a*a+b*b+2*a*b;
	cout<<ans;
}

int main()
{
	int a,b;
	cout<<"enter a and b"<<endl;
	cout<<"for solve a whole square of a and b"<<endl;
	cin>>a>>b;
	 square(a,b);
}
