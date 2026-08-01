/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;

        ListNode Dummy;

        ListNode* temp = &Dummy;
        ListNode* slow = head;

        while(slow && slow->next){


            ListNode* nxt = slow->next->next;

            temp->next = slow->next;
            temp = temp->next;

            ListNode* var = slow;
            temp->next = var;

            temp = temp->next;

            slow = nxt;

        }
        temp->next = slow;

        return Dummy.next;
    }
};