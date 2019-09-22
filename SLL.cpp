#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};
class linkedlist{
    private:
        Node* head,*tail;
    public:

    linkedlist(){
       head=NULL;
       tail=NULL;
    }



    void addnode(int value){
        Node* temp=new Node;
        temp->data=value;
        temp->next=NULL;
        if(head==NULL){
            head=temp;
            tail=temp;
        }
        else{
            tail->next=temp;
            tail=tail->next;
        }
    }
     void display()
  {
    Node *N=new Node;
    N=head;
    while(N!=NULL)
    {
      cout<<N->data<<" ";
      N=N->next;
    }
  }

};
int main()
{
    linkedlist a;
    a.addnode(1);

    a.addnode(2);
    a.display();
    return 0;
}
