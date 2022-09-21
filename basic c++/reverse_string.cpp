// WAP a program to print reverse string.
#include<iostream>
#include<string>
using namespace std;
void reverse(string s )//define fu8nction
{
    if(s.length()==0)//base condition
    {
        return ;
         
    }
    else
    {
    string ros= s.substr(1);
      reverse(ros);//function call it self.
    }
      cout<<s[0];
     
}
int main()
{
    string s="anurag";
    reverse(s);//function call.
    return 0;
}