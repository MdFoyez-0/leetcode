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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* cur = head;
        ListNode*prev = head;
        if ( head -> next == NULL){
            delete head;
            return NULL;

        }
        for ( int i = 0; i < n ; i++){
            cur = cur -> next;
        }

        while (cur == NULL){
            ListNode*temp = head ;
            head = head -> next;
            delete temp ;
            return head;
        }
        while (cur -> next != NULL){
           cur = cur ->next;
           prev = prev-> next;
        }
         ListNode*temp = prev->next;
            prev -> next = prev -> next-> next;
            delete temp;
            return head;
    }
};