class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;

        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = head;

        while(fast && fast->next){
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        prev->next = NULL;
        ListNode* t1 = sortList(head);
        ListNode* t2 = sortList(slow);

        return Merge(t1,t2);
    }
    ListNode* Merge(ListNode* l1,ListNode* l2){
        ListNode dummy(10);
        ListNode* temp = &dummy;

        while(l1 && l2){
            if(l1->val > l2->val){
                temp->next = l2;
                l2 = l2->next;
            }
            else{
                temp->next = l1;
                l1 = l1->next;
            }
            temp = temp->next;
        }
        temp->next = l1 ? l1 : l2;
        return dummy.next;
    }

    

};