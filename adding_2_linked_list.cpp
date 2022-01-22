#include <iostream>
using namespace std;

struct node{ int data; node* link;};

node* head1 = NULL;
node* head2 = NULL;
node* head3 = NULL;

node* insertion(int x,node* head){
    node* temp = new node();
    temp->data = x;
    temp->link = head;
    head = temp;
    return head;
}

void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"  ";
        temp=temp->link;
    }
}


node* linked_list_sum(node* l1, node* l2){

int sum, carry;
carry = 0;

node* dummy = new node();
node* temp = dummy;

while(l1!=NULL || l2!=NULL || carry){

    sum = 0;
    if(l1!=NULL){sum+=l1->data;l1=l1->link;}
    if(l2!=NULL){sum+=l2->data;l2=l2->link;}
    sum+=carry;
    carry = sum/10;
    node* first = new node();
    first->data = sum%10;
    first->link = NULL;

    temp->link = first;
    temp = temp->link;
}
return dummy->link;

}
int main()
{
    head1 = insertion(3,head1);
    head1 = insertion(4,head1);
    head1 = insertion(2,head1);
    // head1 = insertion(5,head1);
    head2 = insertion(4,head2);
    head2 = insertion(6,head2);
    head2 = insertion(5,head2);
    cout<<"Linked List :         ";display(head1);
    cout<<"\nLinked List :         ";display(head2);
    node* result = linked_list_sum(head1,head2);
    cout<<"\nSum of Linked List :  ";display(result);
}
