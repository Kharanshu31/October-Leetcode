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
    ListNode* sortList(ListNode* head) {
        if(!head)
            return head;
        multiset<int>s;
        ListNode* temp=head;
        
        while(temp)
        {
            s.insert(temp->val);
            temp=temp->next;
        }
        
        ListNode* cur=head;
        multiset<int>::iterator ptr;
        for(ptr=s.begin();ptr!=s.end();ptr++)
        {
            if(!cur)
                break;
            //cout<<" val ; "<<(*ptr)<<"  ";
            cur->val=(*ptr);
            cur=cur->next;
        }
        
        return head;
        
    }
};
