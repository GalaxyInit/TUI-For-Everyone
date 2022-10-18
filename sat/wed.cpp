#include<iostream>
using namespace std;
void Merge(int a[],int low,int mid,int high)
{
int i=low;
int j=mid+1;
int k=low;
int temp[20];
while(i<=mid && j<=high)
{
if(a[i]<a[j])
{
temp[k]=a[i];
k++;
i++;
}
else
{
temp[k]=a[j];
j++;
k++;
}
}
while(j<=high)
{
temp[k]=a[j];
j++;
k++;
}
while(i<=mid)
{
temp[k]=a[i];
i++;
k++;
}
for(int p=low;p<=high;p++)
{
a[p]=temp[p];
}
}
void MergeSort(int a[],int low,int high)
{
int mid;
if(low<high)
{
mid=(low+high)/2;
MergeSort(a,low,mid);
MergeSort(a,mid+1,high);
Merge(a,low,mid,high);
}
}
int main()
{
int i;
int arr[9]={15,5,24,8,1,3,16,10,20};
for(i=0;i<9;i++)
{
cout<<"Element is: "<<i+1<<" : "<<arr[i]<<endl;
}
MergeSort(arr,0,8);
cout<<"\n Sorted Data: ";
for(i=0;i<9;i++)
{
cout<<"->"<<arr[i];
}
}
