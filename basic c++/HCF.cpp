//WAP to find hcf of two number.
#include<iostream>
int HCF(int a,int b)//define a function.
{ 
;
    while(b!=0)        
    {
     int   rem=a%b;
        a=b;
        b=rem;
    }


return a;    
}
using namespace std;
int main()

{
    int a,b;//diclare variable.
    cout<<"enter two number"<<endl;
    cin>>a>>b;
    cout<<HCF(a,b);//call function.
    return 0;
}
