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

    void addatfront(int value){
       Node* temp=new Node;
       temp->data=value;
       temp->next=head;
       head=temp;
       cout<<"add at front  ";

      }

       Node* gethead()
      {
        return head;
      }

    void addatend(int value){
       Node* temp=new Node;
       temp->data=value;
       tail->next=temp;
       tail=tail->next;
       cout<<"add at end  ";

      }

     void addbw(Node* a,int value){
       Node* temp=new Node;
       temp->data=value;
       temp->next=a->next;
       a->next=temp;
       cout<<"add in between  ";
      }

      void deletefront(){
        if(head==NULL){
                return;
        }
        else{
           Node *temp=new Node;
           temp=head;
           head=head->next;
           delete temp;

        }
        cout<<"delete front  ";

     }

    void delete_last()
  {
    Node *curr=new Node;
    Node *prev=new Node;
    curr=head;
    while(curr->next!=NULL)
    {
      prev=curr;
      curr=curr->next;
    }
    tail=prev;
    prev->next=NULL;
    delete curr;
    cout<<"delete last  ";
  }

  void deletebwn(Node* a){
     Node* temp;
     temp=a->next;
     a->next=temp->next;
     delete temp;
     cout<<"delete between  ";
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
    Node* head = NULL;
     cout<<"creating linked list  ";
    a.addnode(1);

    a.addnode(2);
    a.display();
    cout<<"\n";
    a.addatfront(5);
    a.display();
    cout<<"\n";
   a.addatfront(6);
    a.display();

    cout<<"\n";
   a.addbw(a.gethead()->next->next, 10);
   a.display();


    cout<<"\n";
   a.deletefront();
   a.display();

   cout<<"\n";

   a.delete_last();
   a.display();

   cout<<"\n";
   a.deletebwn(a.gethead());
   a.display();
   cout<<"\n";
   a.addatend(3);
   a.display();



    return 0;
}
