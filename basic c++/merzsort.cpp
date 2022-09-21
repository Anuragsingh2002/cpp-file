#include<iostream>
using namespace std;

void merg(int arr[],int l,int mid,int r)
{
    int n1=mid-l+1;
    int n2=r-mid;
    int a[n1];
    int b[n2];
    for(int i=0;i<n1;i++)
    {
        a[i]=arr[l+i];
    }
    for(int i=0;i<n2;i++)
    {
        b[i]=arr[mid+1+i];
    }
    int i=0;
    int j=0;
    int k=l;
    while (i<n1 && j<n2)
    {
        if(a[i]<b[j])
        {
            arr[k]=a[i];
            i++;
            k++;
        }
        else
        {
          arr[k]=b[j];
          k++;
          j++;
        }   
    }
    while (i<n1)
    {
        if(a[i]<b[j])
        {
            arr[k]=a[i];
            i++;
            k++;
        }
    }
    while(j<n2)
    { if(a[i]>b[j])
    {
        {
          arr[k]=b[j];
          k++;
          j++;
        }   
    }
    }
}
void mergsort(int arr[],int l,int r)
{
    if(l<r)
    {
        int mid=(l+r)/2;
        mergsort(arr,l,mid);
        mergsort(arr,mid+1,r);
        merg(arr,l,mid,r);
    }
    
}
int main()
{
    int l=0,r=5;
    cout<<"enter l:";
    cin>>l;
    cout<<"enter r:";
    cin>>r;
    int arr[r];
    for (int i = l; i < r; i++)
 {
     cin>>arr[i];
 } 
    mergsort(arr,l,r);
 for (int i = l; i < r; i++)
 {
     cout<<arr[i]<<" ";
 } 
 cout<<endl;
 return 0;
}