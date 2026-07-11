
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next == NULL) return NULL;
        ListNode* slow = head;
        ListNode* prev = head;
        ListNode* fast = head;

        while(fast && fast->next){
            prev = slow;
            fast = fast->next->next;
            slow = slow->next;
        }
        prev->next = slow->next;
        return head;

    }
};