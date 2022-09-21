#include<iostream>
using namespace std;
int number(int n);
int number(int n)
{
	if(n%2==0)
	{
		cout<<"even";
	}
	else
	{
		cout<<"odd";
	}
}
int main()
{
	int n;
	cout<<"enter number"<<endl;
	cin>>n;
	number(n);
	return 0;
}
