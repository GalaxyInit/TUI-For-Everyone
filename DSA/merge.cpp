#include <iostream>
using namespace std;
void Mergearr(int arr[] , int arr2[] , int size1 , int size2){
    int ary[size1+size2];
    for (int i = 0; i < size1; i++)
    {
        ary[i] = arr[i];
    }
    int j = 0;
    for (int i = size1; i < (size1+size2); i++)
    {
        ary[i] = arr2[j];
        j++;
    }
    for (int i = 0; i < (size1+size2); i++)
    {
        cout<<ary[i]<<" ";
    }
}
int main()
{ 
 cout<<"Enter the size of first array: ";
 int size1;
 cin>>size1;
 int arr[size1];
 for (int i = 0; i < size1; i++)
 {
    cin>>arr[i];
 }
 cout<<"Enter the size of second array: ";
 int size2;
 cin>>size2;
 int arr2[size2];
 for (int i = 0; i < size2; i++)
 {
    cin>>arr2[i];
 }
 Mergearr(arr , arr2 , size1 , size2);
 
 return 0;
}