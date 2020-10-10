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
    ListNode* rotateRight(ListNode* head, int k) {
        
        if(!head)
            return head;
        
        int sz=0;
        ListNode* temp=head;
        ListNode* prev=NULL;
        ListNode* p=head;
        
        while(temp)
        {
            sz++;
            temp=temp->next;
        }
        
        int f=sz-(k%sz);
        temp=head;
        
        while(f>0)
        {
            prev=temp;
            temp=temp->next;
            --f;
        }
        
        if(!temp)
        {
            return p;
        }
        
        head=temp;
        ListNode* cur=head;
        
        if(cur)
        {
            while(cur->next)
            {
                cur=cur->next;
            }    
        }
        
        if(prev)
            prev->next=NULL;
        cur->next=p;
        
        return head;
        
    }
};
