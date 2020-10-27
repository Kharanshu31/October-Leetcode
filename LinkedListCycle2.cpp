/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
        if(!head || !head->next)
        {
            return NULL;
        }
            
        
        ListNode *prev=head;
        ListNode *cur=head;
        
        prev=prev->next;
        cur=cur->next->next;
        
        while(cur&& cur->next)
        {
            if(prev==cur)
                break;
            prev=prev->next;
            cur=cur->next->next;
        }
        
        if(prev!=cur)
            return NULL;
        prev=head;
        while(prev!=cur)
        {
            prev=prev->next;
            cur=cur->next;
        }
        
        return prev;
        
    }
};
