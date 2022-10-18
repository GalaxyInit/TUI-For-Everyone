#include<iostream>
using namespace std;
int partition(int a[],int low,int high)
{
int pivot=a[high];
int i=low-1;
int j,t;
for(j=low;j<=high-1;j++)
{
if(a[j]<=pivot)
{
i++;
t=a[j];
a[j]=a[i];
a[i]=t;
}
}
i++;
t=a[i];
a[i]=a[high];
a[high]=t;
return i;

}
void quick(int a[],int p,int r)
{
if(p<r)
{
int q=partition(a,p,r);
quick(a,p,q-1);
quick(a,q+1,r);
}

}
int main()
{
int a[8]={35,50,15,25,80,20,90,45};

quick(a,0,7);
for(int i=0;i<=7;i++)
{
cout<<a[i]<<endl;
}
}
