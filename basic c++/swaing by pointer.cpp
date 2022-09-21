#include<iostream>
using namespace std;
int swap(int *p,int *q);
int swap(int *p,int *q)
{int c;
  
	c=*p;
	*p=*q;
	*q=c;
	cout<<"print  after swap "<<endl;
	cout<<"a=";
	cout<<*p<<endl;
		cout<<"b=";
	cout<<*q;


}
using namespace std;
int main()
{
	int a,b;
	cout<<"enter a=";
	cin>>a;
		cout<<"enter b=";
	cin>>b;
	int *p,*q,*v;
	p=&a;
	q=&b;
	swap(*p,*q);
	int c;
	v=&c;
	*v=*p;
	*p=*q;
	*q=*v;
	cout<<"print  after swap "<<endl;
	cout<<"a=";
	cout<<*p<<endl;
		cout<<"b=";
	cout<<*q;
}
