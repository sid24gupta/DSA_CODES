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

bool isPalindrome(ListNode* head) {

    bool answer;
    int array[99999] = {0};
    int size = 0;
    while(head!=NULL){
        array[size] = head->val;
        head=head->next;
        size++;
    }

    for (int i=0, j=size-1; i<=size-1, j>=0; i++,j--)
    {   cout<<"\n"<<array[i]<<"  "<<array[j];
        if (array[i]==array[j]){answer = true;}
        else{answer=false;break;}
    }
    return answer;
    }


int main()
{   head1 = insertion(1,head1);
    head1 = insertion(2,head1);
    // head1 = insertion(1,head1);
    // head1 = insertion(1,head1);
    bool result;
    result = isPalindrome(head1);
    cout<<"\nAnswer : "<<result;
    return 0;
}
