//WAP to find a string bis palindrome or not.
#include<iostream>
#include<string>
using namespace std;
int palindrome(string s,int i,int j)//define funtion.

{ 
    if(s[i]==s[j])//base condtion
    {
        return true ;
    } 
    else
    return false;
    return palindrome(s,i+1,j-1);//recursive condition.
}
int main()
{ int i=1,j=3;
    string s="abc";
    cout<<palindrome(s,i,j);//calling function.
}
