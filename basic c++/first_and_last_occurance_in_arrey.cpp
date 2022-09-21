#include<iostream>
using namespace std;
int firstocc(int arr[],int n,int i,int key)
{
    if(i==n)
    {
        return -1;
    }
    else if(arr[i]==key)
    {
        return i;
    }
    return (arr,n,i++,key);
}
int lastocc(int arr[],int n,int i,int key)
{
    if(i==n)
    {
        return -1;
    }
   
   
    
    int restarr= lastocc(arr,n,i++,key);
      if(restarr!=-1)
    {
        return restarr;
    }
     if(arr[i]==key)
    {
        return i;
    }
    return -1;
   

}
   
int main()
{
    int arr[]={1,2,3,2,4,5};
   cout<< firstocc(arr,5,1,2);
   cout<<lastocc(arr,5,1,2);
    return 0;
}
