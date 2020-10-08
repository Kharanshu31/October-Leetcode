/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
TreeNode* Rinsert(TreeNode *p,int key)
{
    TreeNode *t=NULL;
    if(p==NULL)
    {
        t=new TreeNode;
        t->val=key;
        t->left=t->right=NULL;
        return t;
    }

    if(key<p->val)
    {
        p->left=Rinsert(p->left,key);
    }
    else if(key>p->val)
    {
        p->right=Rinsert(p->right,key);
    }
    else
    {
        return NULL;
    }
    return p;
}
    
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        root=Rinsert(root,val);
        return root;
    }
};
