#include<iostream>
using namespace std;
void delet(int &n,int arr[])
{
  int pos1;
  cout<<"enter the position of element to delete"<<endl;
  cin>>pos1;
  pos1=pos1-1;
  for(int x=n-1;x>pos1;x++)
  {
    arr[x+1]=arr[x];
  }
 cout<<new array is<<endl;
  for(int i=0;i<n-1;i++) //we use n-1 because we delete the element the index will change // array dont allow the spaces*
  {
    cout<<arr[i];
  };
  
};
int main()
{   
    int arr[100];
    int n;
    cout<<"enter the no.of elements"<<endl;
    cin>>n;
   for(int i=0;i<n;i++)   //arranging numbers in array usinf=g for loop
    { 
      cout<<"enter the "<<i+1<<"element"<<endl;
       cin>>arr[i];
       
    }
   /* int x;
    cout<<"Enter the index"<<endl;
    cin>>x;             //accessing element through index
    cout<<arr[x]<<endl; */
    cout<<"given elements are:"<<endl;
    for(int i=0;i<n;i++)
    { 
      cout<<arr[i]<<endl; //output, when ever we have to print full array we have to use for loop
    }

    // insertion 
    int pos,p; 
    cout<<"Enter the position to insert element"<<endl;
    cin>>pos; //index where we have to add
    pos=pos-1;

    for(int x=n;x>=pos;x--)
    {
      arr[x]=arr[x-1];
    };
    cout<<"enter the new element"<<endl;
    cin>>p; // element which have to add
    arr[pos]=p;
   
   cout<<"new array is:-"<<endl;
   for(int i=0;i<n+1;i++)
    { 
      cout<<arr[i]<<endl; //output, when ever we have to print full array we have to use for loop
    }; 
  //deletion
  int pos1;
  cout<<"enter the position of element to delete"<<endl;
  cin>>pos1;
  pos1=pos1-1;
   for(int x=n-1;x>pos1;x++)
   {
    arr[pos1]=arr[pos1+1];
   }
  cout<<"new array is"<<endl;
  for(int i=0;i<n-1;i++) //we use n-1 because we delete the element the index will change // array dont allow the spaces*
   {
    cout<<arr[i];
   }

   //searching
 int  se;
   cout<<"enter the element"<<endl;
   cin>>se;
   int i;
  for(i=0;i<n;i++)
  {
    if(arr[i]==se)
    {
        return i;   //if the statement element is found in array f will update to 1 ;
        break; //loop stop repeating
    }
  }
  if(i!=-1)
  {
    cout<<"element found in "<<<<" position"<<endl;
  }
  else
  {
    cout<<"element is not found in array"<<endl;
  }
  return 0;
    
}