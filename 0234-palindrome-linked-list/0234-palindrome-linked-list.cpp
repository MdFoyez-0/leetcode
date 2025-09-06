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
ListNode* reverse(ListNode* head){
   if ( head == NULL){
            return head;
        }
        if ( head -> next == NULL){
            return head;
        }
        ListNode*newhead = reverse(head -> next);
        ListNode* first = head-> next;
        first -> next = head;
        head -> next = NULL;
        return newhead;
}
    bool isPalindrome(ListNode* head) {
        if ( head == NULL){
            return true;
        }
        if ( head -> next == NULL){
            return true;
        }
        ListNode* temp = head;
        ListNode* cur = head;
        while ( temp != NULL && temp -> next != NULL && temp -> next -> next != NULL){
            cur = cur -> next;
            temp = temp -> next -> next;
        }
        
            ListNode* newhead = reverse(cur -> next);

            ListNode * first = head ;
            ListNode * second = newhead;
            while ( first != NULL && second != NULL){
                if ( first -> val != second -> val){
                    return false;
                }
                first = first -> next ;
                second = second-> next;
            }
            cur -> next = reverse (newhead);


       return true;
    }
};