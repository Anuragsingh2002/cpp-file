//WAP to swap two number a and b.
#include<iostream>
using namespace std;
int swap(int a,int b)//define function.
{
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<"a="<<a<<endl<<"b="<<b;
    
}
int main()
{
    int a,b;//variable diclare.
    cout<<"enter a:";
    cin>>a;
    cout<<"enter b:";
    cin>>b;
    swap(a,b);//fuction call.
    return 0;
   
    

}
