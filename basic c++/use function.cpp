#include<iostream>
using namespace std;
int sum(int a, int b);
int sum(int a, int b)
{

	int c=a+b;
	cout<<c;
	return 0;
}
int main()
{ int a,b;
cin>>a>>b;
	 sum(  a,b);
	 
	return 0;
}
