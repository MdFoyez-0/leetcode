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
    ListNode* middleNode(ListNode* head) {
        if ( head == NULL ){
            return NULL;
        }
        ListNode* temp = head;
        ListNode* cur = head;
        while ( temp != NULL&& temp -> next != NULL ){
            cur  = cur-> next;
            temp = temp -> next -> next;
        }
        head = cur;
        return head;
    }
};