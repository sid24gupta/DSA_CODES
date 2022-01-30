ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* a = headA;
        ListNode* b = headB;
        while(a!=b){
            if(a==NULL)a=headB;
            else a=a->next;
            if(b==NULL)b=headA;
            else b=b->next;
        }
        return a;
    }


ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        int l1 = 0;
        int l2 = 0;
        int diff = 0;
        ListNode* head1 = headA;
        ListNode* head2 = headB;
        while(head1!=NULL){l1++;head1=head1->next;}
        while(head2!=NULL){l2++;head2=head2->next;}
        if(l1>l2){
            diff=l1-l2;
            while(diff>0)
            {headA = headA->next;diff--;}
            }
        else{
            diff = l2-l1;
            while(diff>0)
            {headB = headB->next;diff--;}
            }
        while(headA!=headB){headA=headA->next;headB=headB->next;}return headB;
    }
