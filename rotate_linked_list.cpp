#include <iostream>
using namespace std;
struct ListNode{
    int val;
    ListNode* next;
};
ListNode* head = NULL;

ListNode* insertion(ListNode* head, int x){

    ListNode* r = head;
    ListNode* temp = new ListNode();
    temp->val = x;
    temp->next = NULL;
    if(head==NULL){temp->next=head;head=temp;return head;}
    while(head->next!=NULL){head=head->next;}
    head->next = temp;
    return r;
}
void display(ListNode* head){
    while(head!=NULL){
        cout<<head->val<<" -> ";
        head=head->next;
    }
}
ListNode* rotate(ListNode* head, int k){

    ListNode* t = head;
    ListNode* temp = head;
    int length = 1;
    while(t->next!=NULL){length++;t=t->next;}
    k = k%length;
    t->next = temp;
    int difference = length - k;
    while(difference>1){
        temp=temp->next;
        difference--;
    }
    head = temp->next;
    temp->next = NULL;
    return head;
}
int main()
{
    head = insertion(head,0);
    head = insertion(head,1);
    head = insertion(head,2);
    // head = insertion(head,4);
    // head = insertion(head,5);
    cout<<"\nLinked List  : ";display(head);
    head = rotate(head,4);
    cout<<"\nRotated List : ";display(head);
}
