class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* nxt = head->next;

        while(nxt){
            curr->next = prev;
            prev = curr;
            curr = nxt;
            nxt = nxt->next;
        }
        curr->next = prev;
        return curr;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head == NULL || head->next == NULL) return head;

        ListNode dummy;
        ListNode* temp = &dummy;
        ListNode* start = head, *prev = head, *temp1 = head;

        while(temp1){
            start = temp1;
            int count = 0;
            while(temp1 && count<k){
                prev = temp1;
                temp1 = temp1->next;
                count++;
            }
            if(count == k){
                prev->next = NULL;
                temp->next = reverseList(start);
                temp = start;
                start->next = temp1;
            }
            else{
                temp->next = start;
                break;
            }
        }
        return dummy.next;
    }
};