//WAP to find power n number.
#include<iostream>
using namespace std;
int power(int n,int p)//define function.
{
    if (p==0)
    {
        return 1;
    }
    return n*power(n,p-1);
    }
int main()
{
    int n,p;//variable diclare.
    cout<<"enter number:";
    cin>>n;
    cout<<"enter power:";
    cin>>p;
    cout<<power(n,p);//function call.
    return 0;
}