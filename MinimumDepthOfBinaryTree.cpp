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
    int ans=1e6;
    
    void dfs(TreeNode* root,int len)
    {
        if(!root->left && !root->right)
        {
            //cout<<"len is : "<<len<<"\n";
            ans=min(ans,len);
        }
        
        if(root->left)
            dfs(root->left,len+1);
        if(root->right)
            dfs(root->right,len+1);
        
    }
    
    int minDepth(TreeNode* root) {
        if(!root)
            return 0;
        dfs(root,1);
        
        return ans;
        
    }
};
