#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node * next;
    Node(int d):data(d),next(NULL){} 
     int getdata(){
        return data;
    }
    ~Node(){
        if(next!=NULL){
            delete next;
        }
    }

};
class list{
    public:
    Node * head;
    Node * tail;
    list(){
        head = NULL; 
        tail = NULL;
    }
    Node* begin(){
            return head;
        }
   
    void push_front(int data){
        if(head == NULL){
            Node * n = new Node(data);
            head=tail=n;
        }
        else{
            Node * n = new Node(data);
            n->next = head;
            head = n;
        }
    } 

    void push_back(int data){
        if(head == NULL){
            Node * n = new Node(data);
            head=tail=n;
        }
        else{
            Node * n = new Node(data);
            tail->next = n;
            tail = n;
        }
    } 
    void insert(int data,int pos){
        if(pos==0){
            push_front(data); //pos defines insert after how many nodes.
        }
        else{
            Node * temp = head;
            for(int i =1;i<=pos-1;i++){
                temp=temp->next;
            }
           Node * n = new Node(data);
           n->next=temp->next;
           temp->next = n;
        }
    }
    void remove(int pos){
       Node * temp = head;
        Node * node ;
      if(head == NULL){
        cout<<"linked list is empty"<<endl;
      }
      else if(pos == 0){
       head = head->next;
       free(temp);
      }
      else{ 
        for(int i = 0 ;i<pos-1;i++){
          temp=temp->next;
          break;
        }
        if(temp==NULL || temp->next==NULL){
          cout<<"enter a vaild postion"<<endl;
        }
        else{
          node = temp->next;
          temp->next = node->next;
          free(node);
        }
      }
    }

    void print(){
        Node * head = begin();
        while(head!=NULL){
            cout<<head->data<<"->";
            head=head->next;
        }
    }
    
    
};
int main(){
    list t1;
    t1.push_front(4);
    t1.push_front(2);
    t1.push_front(1);
    t1.push_back(5);
    t1.push_back(6);
    t1.insert(3,2);
    t1.print();
    cout<<endl;
    t1.remove(0);
    t1.print();
   
}