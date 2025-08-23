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
    void reorderList(ListNode* head) {
    if (head == NULL || head->next == NULL)
            return;

        // find middle of the list
        ListNode* l1 = head;
        ListNode* l2 = head;
        while (l2->next != NULL && l2->next->next != NULL) {
            l1 = l1->next;      
            l2 = l2->next->next; 
        }
        // reverse the 2nd half from the middle
        ListNode* mid = l1;
        ListNode* prev = NULL;
        ListNode* cur = mid->next;
        while (cur != NULL) {
            ListNode* next1 = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next1;
        }
        mid->next = NULL;   // cut first half from main list
        l2 = prev;          // l2 now points to reversed half or 2nd half

        // add 1st half and the reversed 2nd half
        l1 = head;
        while (l2 != NULL) {
            ListNode* temp1 = l1->next;
            ListNode* temp2 = l2->next;

            l1->next = l2;
            l2->next = temp1;
            l1 = temp1;
            l2 = temp2;
        }
    }
};