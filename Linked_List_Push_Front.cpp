#include<iostream>
using namespace std;
class List;
class Node{
    public:
    int data;
    Node *next;
    Node(int d):data(d), next(NULL){
    }
     int getData(){
        return data;
    }
    friend class List;
};

class List{
    Node * head;
    Node * tail;
    public:
    List():head(NULL),tail(NULL){}
    Node* begin(){
        return head;
    }
   
    void pushfront(int data){
        if(head==NULL){
            Node* n= new Node(data);
            head =tail=n;
            return;
        }
        else{
            Node* n= new Node(data);
            n->next=head;
            head=n;
        }
    }
    void pushback(int data){
        if(head==NULL){
             Node* n= new Node(data);
              head =tail=n;
        }
        else{
             Node* n= new Node(data);
             tail->next=n;
             tail=n;
        }
        
    }
    
};

int main(){
    List l;
    l.pushfront(1);
    l.pushback(2);
      l.pushback(3);
      l.pushfront(7);
    Node* head=l.begin();
    while(head!=NULL){
        cout<<head->getData()<<"->";
        head=head->next;
    }
    return 0;
}