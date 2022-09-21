#include <iostream>
using namespace std;
int main()
{
    int n; int arr[n], element, c = 0;
    cout << "Enter the total elements in an array: ";
    cin >> n;
    cout << "Enter the elements of an array: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the element: ";
    cin >> element;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == element)
        {
            c = c + 1;
            break;
        }
        else
        continue;
    }
    if(c == 1)
    {
    	cout << "Element found.";
	}
    else
    {
    	cout << "Element not found.";
	}
}
