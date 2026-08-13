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
    
    void dfs(TreeNode* root,int &count,int maximum){

        if(!root){return;}
        if(root->val>=maximum){count++;}
        dfs(root->left,count,max(maximum,root->val));
        dfs(root->right,count,max(maximum,root->val));

    }

    int goodNodes(TreeNode* root) {
        int count=0;
        if(!root){return -1;}
        int maximum=root->val;
        dfs(root,count,maximum);
        return count;

    }
};
