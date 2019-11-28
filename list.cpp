#include"list.h"

List::List(){
    HEAD = NULL;
    TAIL = NULL;
}
List::~List(){}

bool List::isEmpty(){
    return HEAD == NULL;
}

void List::addToHead(int data)
{
    Node* new_node=new Node(); //create new node
    new_node->info=data;
    new_node->next=HEAD;
    HEAD=new_node;

    if(TAIL=NULL){
    TAIL=HEAD;}
}

void List::addToTail( int data){
    Node* new_node=new Node();
    new_node->info=data;
    new_node->next=NULL;
    TAIL->next=new_node;
    Tail=new_node;
}

void List::add(int data,Node* predecessor)
{
    Node* new_node=new Node();
    new_node->info=data;
    new_node->next=predecessor->next;
    predecessor->next=new_node;

}

void List::removeFromHead()
{
    Node* nodeToDelete=HEAD;
    HEAD=nodeToDelete->next;
    delete nodeToDelete;
}


/*void List::remove(int data){
    if(isEmpty()){
        std::cout<<"The List is Empty"<<endl;
        }
    if(HEAD->info==data){
        removeFromHead();
        if(HEAD==NULL){TAIL==NULL;}
        else{
        temp=HEAD->next;
        prev=HEAD;
        }
        }

}*/

void List::traverse()
{
    Node* temp=HEAD;
    while(temp!=NULL){
    std::cout<<temp->info;
    temp=temp->next;
    }

}


    int main(){
    List l;
    std::cout<<l.isEmpty();
    l.addToHead(6);
    l.addToHead(12);
    l.addToHead(15);
    l.traverse();



    }
