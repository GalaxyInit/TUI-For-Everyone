#include <iostream>
using namespace std;
class node{
public:
int data;
node *next;
};
node *head=NULL;
void insert(int d)
{
node *ptr;
node *n=new node;
n->data=d;
n->next=NULL;
if(head==NULL)
{
head=n;
n->next=head;
}
else{
ptr=head;
while(ptr->next!=head)
{
ptr=ptr->next;
}
ptr->next=n;
n->next=head;
}
}
void traverse()
{
node *ptr;
ptr=head;
do
{
cout<<ptr->data<<endl;
ptr=ptr->next;
} while (ptr!=head);
}
int main()
{
insert(1);
insert(2);
traverse();
return 0;
}
