class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;

        ListNode Even(1); 
        ListNode Odd(1);

        ListNode* even = &Even;
        ListNode* odd = &Odd;

        ListNode *temp = head;
        int idx = 1;
        while(temp) {
            if(idx%2 == 1){
                odd->next = temp;
                odd = temp;
            }
            else{
                even->next = temp;
                even = temp;
            }
            temp = temp->next;
            idx++;
        }

        odd->next = Even.next;
        even->next = NULL;
        return Odd.next;
    }
};