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
    void inorder(TreeNode* root,vector<int>&bs){
        if(root==NULL){
            return;
        }
        inorder(root->left,bs);
        bs.push_back(root->val);
        inorder(root->right,bs);
    }
    void recover(TreeNode* root,int &a,int &b,TreeNode* &r){
        if(root==NULL){
            return;
        }
        if(root->val==a && root!=r){
            root->val=b;
            r=root;
        }else if(root->val==b && root!=r){
            root->val=a;
            r=root;
        }
        recover(root->left,a,b,r);
        recover(root->right,a,b,r);
    }
    void recoverTree(TreeNode* root) {
        vector<int>bs;
        inorder(root,bs);
        int a=-1,b=-1;
        int count=0;
        for(int i=0;i<bs.size()-1;i++){
            if(bs[i]>bs[i+1] && count==0){
                a=i;
                count++;
            }else if(bs[i]>bs[i+1] && count==1){
                b=bs[i+1];
                break;
            }
        }
        if(b==-1){
            b=bs[a+1];
        }
        a=bs[a];
        TreeNode* r;
        recover(root,a,b,r);
    }
};
