#include <iostream>
using namespace std;
struct node { int data; node* link; };

node* head = NULL;

void insertion_at_tail(int x){


    node* temp = new node();
    temp->data = x;
    temp->link = NULL;

    if(head==NULL){temp->link = head;head = temp;return;}

    node* temp1 = head;
    while(temp1->link!=NULL){temp1=temp1->link;}

    temp1->link = temp;
}

void display(node* temp){
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp=temp->link;
    }
}

int main()
{
    insertion_at_tail(3);
    insertion_at_tail(4);
    insertion_at_tail(1);
    insertion_at_tail(9);
    display(head);    
}
