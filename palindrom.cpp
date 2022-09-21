#include<bits/stdc++.h>
using namespace std;
bool ispalindrom(int n)
{
    int temp=n, num=0;
    while(temp>0)
    {
        num=num*10+temp%10;
        temp=temp/10;
    }
    if(num==n)
    {
        return true;
    }
    return false;
}
int findpalindromicsubarr(vector<int> arr,int k)
{
    int num=0;
    for (int i = 0; i < k; i++)
    {
        num=num*10+arr[i];
    }
    if(ispalindrom(num))
    {
        return 0;
    }
    for (int i =k; i < arr.size(); i++)
    {
       num=num*(int)pow(10,k-1)*10+arr[i];
       if(ispalindrom(num))
       {
           return i-k;
       }
    }
    return -1;
    
}
int main()
{  vector <int> arr={2,3,5,1,1,5};
int k=4;
int ans=findpalindromicsubarr(arr,k);
if(ans==-1)
{
    cout<<"palindrom is not exist";
}
else
{
    for (int j = ans; j < ans+k; j++)
    {
        cout <<ans[j] <<" ";
    }
    
}

    return 0;
}