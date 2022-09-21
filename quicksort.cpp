// WAP to short from quick method.
#include<iostream>
using namespace std;
int swap(int arr[],int  i,int j)//swaping function.
{
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
int petition(int arr[],int l,int r)//pation function
{
    int pivote=arr[r];
    int j,i=l-1;
    for (int j = l; j < r; j++)
    {
        if(arr[j]<pivote)
        {
            i++;
            swap(arr,i,j);//function calling.
        }
    }
    swap(arr,i+1,r);//function calling.
    return i+1;
} 
void quicksort(int arr[],int l,int r)//quick function.
{
    if(l<r)
    {
        int pi=petition(arr,l,r);
        quicksort(arr,l,pi-1);
        quicksort(arr,pi+1,r);
    }
}
int main()
{
    int arr[5];
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    quicksort(arr,0,5);//function call.
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
    return 0;
}