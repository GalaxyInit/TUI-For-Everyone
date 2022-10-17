#include <iostream>
using namespace std;

int main()
{
    int n,temp,i,j;
    int a[20];
    cout<<"Enter range of array:";
    cin>>n;
    cout<<"Enter the elements: ";
    for ( int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for ( int i = 1; i < n; i++)
    {
        temp=a[i];
        j=i-1;

        while ((temp<a[j]&&(j>=0)))
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=temp;
         
    }
    cout<<"The sorted array is: ";
    for ( int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}