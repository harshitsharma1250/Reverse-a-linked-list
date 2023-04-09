  ListNode *curr = head ;
        ListNode *nxt ;
        ListNode *prev = NULL ; 

        while(curr !=NULL){
            nxt = curr->next ;
            curr->next = prev ;
            prev = curr ;
            curr = nxt ;
        }
     

        return prev ;
