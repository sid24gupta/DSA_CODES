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
int reversDigits(int num)
{
    int rev_num = 0;
    while (num > 0) {
        rev_num = rev_num * 10 + num % 10;
        num = num / 10;
    }
    return rev_num;
}
void reverse(node* head){
    node* prev = NULL;
    node* current = head;
    node* next;
    while(current!=NULL){
        next = current->link;
        current->link = prev;
        prev = current;
        current = next;
    }
    head = prev;
    display(head);
}
void linked_list_sum(node* l1, node* l2){
int num_1 = 0, num_2 = 0;
node* temp1 = l1;
node* temp2 = l2;
while(temp1!=NULL){
    num_1 = num_1*10 + temp1->data;
    temp1=temp1->link;
}
while(temp2!=NULL){
    num_2 = num_2*10 + temp2->data;
    temp2=temp2->link;
}
int answer = num_2+num_1;

while(answer>0){
    int a = answer%10;
    head3 = insertion(a,head3);
    answer = answer/10;
}
display(head3);
}

void merge_list(node* l1, node* l2){

    node* l3 = NULL;

    while(l1!=NULL && l2!=NULL){

        if (l1->data < l2-> data){
            node* temp = new node();
            temp-> data = l1->data;
            temp-> link = l3;
            l3 = temp;
            l1=l1->link;
        }
        else{
            node* temp = new node();
            temp-> data = l2->data;
            temp-> link = l3;
            l3 = temp;
            l2=l2->link;
        }

    }
    while(l1!=NULL){
        node* temp = new node();
        temp-> data = l1->data;
        temp-> link = l3;
        l3 = temp;l1=l1->link;}
    while(l2!=NULL){
        node* temp = new node();
        temp-> data = l2->data;
        temp-> link = l3;
        l3 = temp;l2=l2->link;}
// reverse(l3);
display(l3);
}

int main()
{   
    head1 = insertion(40,head1);
    head1 = insertion(15,head1);
    head1 = insertion(10,head1);
    head1 = insertion(5,head1);
    // head1 = insertion(7,head1);
    head2 = insertion(20,head2);
    head2 = insertion(3,head2);
    head2 = insertion(2,head2);
    cout<<"Linked List :         ";display(head1);
    cout<<"\nLinked List :         ";display(head2);
    // cout<<"\nSum of Linked List :  ";linked_list_sum(head1,head2);
    // cout<<"\nReverse Linked List : ";reverse();
    cout<<"\nMerged Linked List :  ";merge_list(head1,head2);
}
