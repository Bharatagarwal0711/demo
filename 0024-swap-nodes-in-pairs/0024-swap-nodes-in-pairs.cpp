/**
class ListNode {
public:
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 */
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

    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        
        ListNode Dummy(0);
        ListNode* temp = &Dummy;

        ListNode* slow = head;
        ListNode* fast = head->next;
        ListNode* nxt = fast->next;


        while(slow && slow->next){
            fast->next = NULL;

            temp->next = reverseList(slow);
            slow->next = nxt;
            temp = slow;

            slow = nxt;

            if(slow && slow->next){
                fast = slow->next;
                nxt = slow->next->next;
            }
            else break;
        }

        return Dummy.next;



        

    }
};