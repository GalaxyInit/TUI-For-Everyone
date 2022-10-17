#include <iostream>
using namespace std;
int BinarySearch(int arr[] , int beg, int end, int item){
    int mid = (beg+end) /2;
    while (beg<=end && arr[mid]!=item)
    {
        if (item<arr[mid])
        {
            end = mid-1;
            mid = (beg+end) /2;
            
        }
        else{
            beg = mid+1;
            mid = (beg+end) /2;
        }
    }
    if (arr[mid]==item)
    {
        cout<<mid;
        return 0;
    }
    else {
        cout<<"Element not present in array"<<endl;
        return 0;
    }
    
    
}
int main()
{  int lb,ub,item,size;
    cout<<"Enter the lower bound of array: ";
    cin>>lb;
    cout<<"Enter the upper bound of array: ";
    cin>>ub;
    size = (ub-lb)+1;
 int arr[size];
 for (int i = 1; i <= size; i++)
 {
    cin>>arr[i];
 }
 cout<<"Enter the item you are searching for: ";
 cin>>item;
 BinarySearch(arr , lb , ub , item );
 return 0;
}