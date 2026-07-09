class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode dummy(10);
        ListNode* dum = &dummy;

        ListNode* temp = head;

        while(temp){
            if(temp->val != val){
                dum->next = temp;
                dum = dum->next;
            }
            temp = temp->next;
        }
        dum->next = NULL;
        return dummy.next;
    }
};