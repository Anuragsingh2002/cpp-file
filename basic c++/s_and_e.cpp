#include<iostream>
using namespace std;
int countpath(int s,int e)
{
    if(s==1 && e==1)
    {
        return 1;
    }
    if(s>e)
    {  
        return 0;
    }
    int count=0;
    for (int i = s; i <= e; i++)
    {
         count= count +countpath(s+i,e);
         return count; 
    }
  //  return count;
}
int main()
{
    cout<<countpath(2,6);
}