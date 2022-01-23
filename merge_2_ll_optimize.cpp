ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* current = new ListNode();
        ListNode* l3 = current;
        while(list1!=NULL && list2!=NULL){
            if (list1->val < list2-> val){
                current->next = list1;
                list1=list1->next;
            }
            else{
                current->next = list2;
                list2=list2->next;
            }
            current=current->next;
        }
        if(list1!=NULL){current->next=list1;}
        if(list2!=NULL){current->next=list2;}
    return l3->next;
    }