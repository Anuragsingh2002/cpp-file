//WAP to find a factorial of n number.
#include<iostream>
using namespace std;
int fact(int n)//define function.
{
    if(n==1)
    {
        return 1;
    }
    return n*fact(n-1);//logic.
}
int main()

{
    int n;//variable diclare.
    cout<<"enter number:";
    cin>>n;
    cout<<fact(n);//function call.
    return 0;
}
