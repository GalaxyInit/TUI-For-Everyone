#include <iostream>
using namespace std;

int main()
{
    int n,loc,small,temp;
    int a[20];
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        small=a[i];
        loc=i;
        for (int j = i+1; j < n; j++)
        {
        if (a[j]<small)
        {
            small=a[j];
            loc=j;
        }
        temp=a[i];
        a[i]=a[loc];
        a[loc]=temp;
        } 
    }
    cout<<"The sorted array is: ";
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}