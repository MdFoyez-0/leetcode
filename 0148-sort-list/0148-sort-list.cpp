
class Solution {
public: ListNode* findmiddle  ( ListNode* head){
       ListNode* slow = head;
       ListNode* fast = head->next;
       while (fast != NULL && fast-> next != NULL){
        slow = slow -> next;
        fast = fast -> next -> next;
       }
       return slow;
       }
       
       ListNode* mergesort(ListNode* l1 , ListNode* l2){
       ListNode* dummy = new ListNode(0);
       ListNode* temp = dummy;
       
        while ( l1 != NULL && l2!= NULL){
            if ( l1 -> val < l2-> val ){
                temp -> next = l1;
                temp = l1;
                l1 = l1 -> next;
            }
            else{
                temp -> next = l2;
                temp = l2;
                l2 = l2 -> next;
             }
        }
         if (l1 != NULL){
                temp -> next = l1;
            }
            else temp -> next = l2;

            return dummy -> next;
       }
    ListNode* sortList(ListNode* head) {
       if (head == NULL){
        return head;
       } 
       if ( head -> next == NULL ){
        return head;
       }
       ListNode* middle = findmiddle(head);
      ListNode* right = middle -> next;
      middle -> next = NULL;
      ListNode* left = head;

      left = sortList(left);
      right = sortList (right);
        
        return mergesort(left,right);

    }
};