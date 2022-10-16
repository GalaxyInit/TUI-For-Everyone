#include <iostream>
using namespace std;
void LinearSearch(int arr[] ,int size , int item){
 for (int i = 0; i < size; i++)
 {
    if (arr[i]==item)
    {
        cout<<"Item is present at index: "<<i<<endl;
        return;
    }
    else
    continue;
    
 }
 cout<<"The element is not present in array"<<endl;
}
int main()
{ 
 int a;
 cout<<"Enter size of array ";
 cin>>a;
 int arr[a];
 for (int i = 0; i < a; i++)
 {
    cout<<"Enter array element at index "<<i<<" ";
    cin>>arr[i];
 }
 int item;
 cout<<"Enter the element you are searching for: ";
 cin>>item;
 LinearSearch(arr,a,item);
 

 return 0;
}