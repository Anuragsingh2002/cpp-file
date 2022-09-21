#include<iostream>
using namespace std;
bool power(int n)
{
    return (n&& !(n&n-1));
}
int main()
{
    int n=8,a;

    a=power(n);
    cout<<a;
}