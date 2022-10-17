#include<iostream>
using namespace std;
int main(){

  int a[20],no;
  cout<<"Enter the len of an array";
  cin>>no;
  cout<<"Enter elements in an array"<<endl;
  for(int i=1; i<=no;i++)  
  {
    cin>>a[i];
    
  }
  cout<<"Traverse elements in an array"<<endl;
  for(int i=1;i<=no;i++){
    cout<<"a["<<i<<"]="<<a[i]<<endl;
  }
  cout<<"Enter that element you want to delete"<<endl;
  cin>>item;
  for(int i=0;i<=no;i++)
  {
    if(a[i]==item)
    {
        a[i]=a[i+1];
    }
    else{
        cout<<"Element not found";
    }
  }
}
