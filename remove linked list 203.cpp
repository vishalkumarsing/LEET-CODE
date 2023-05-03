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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode*curr=head;
        
        while(curr!=NULL&& curr->val==val){
            curr=curr->next;
        }
        if(curr==NULL){
            return curr;

        }
        curr->next=removeElements(curr->next,val);
        return curr;
        
    }
};
