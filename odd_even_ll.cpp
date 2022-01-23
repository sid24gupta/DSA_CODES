#include <iostream>
using namespace std;
struct ListNode{ int val; ListNode* next;};
ListNode* head1 = NULL;
ListNode* insertion(int x,ListNode* head){
    ListNode* temp = new ListNode();
    temp->val = x;
    temp->next = head;
    head = temp;
    return head;
}

ListNode* oddEvenList(ListNode* head) {
        
        int even_arr[5] = {0};
        int odd_arr[5] = {0};
        ListNode* temp = head;
        ListNode* current = head;
        int value = 1;
        int odd_size = 0, even_size = 0;
        while(temp!=NULL){
            if(value%2!=0){odd_arr[odd_size] = temp->val;odd_size++;}
            else{even_arr[even_size] = temp->val;even_size++;}
            temp=temp->next;
            value++;
        }
        int i =0,j=0;
        while(current!=NULL){
            if (i<=odd_size-1){
            current->val = odd_arr[i];
            i++;}
            else{
                current->val = even_arr[j];
                j++;
            }
            current=current->next;
        }
        return head;
    }


int main()
{   head1 = insertion(5,head1);
    head1 = insertion(4,head1);
    head1 = insertion(3,head1);
    head1 = insertion(2,head1);
    head1 = insertion(1,head1);

    ListNode* result = oddEvenList(head1);
    cout<<"\nAnswer : "<<result;
    return 0;
}
