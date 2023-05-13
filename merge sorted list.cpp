 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* head1, ListNode* head2) {
        if(head1 && head2)
        {
            if(head1->val<head2->val)
            {
                head1->next=mergeTwoLists(head1->next,head2);
                return head1;
            }
            else
            {
                head2->next =mergeTwoLists(head1,head2->next);
                return head2;
            }
        }
        if(head1 == NULL)
            return head2;
        return head1;        
    }
};
