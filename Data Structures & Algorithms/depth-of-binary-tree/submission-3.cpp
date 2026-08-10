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
    void depth(TreeNode* st,int &maximum,int count){
        if(st==nullptr){
            return;
        }
        count++;
        if(maximum<count){
            maximum=count;
        }
        depth(st->left,maximum,count);
        depth(st->right,maximum,count);
    }
    int maxDepth(TreeNode* root) {
        
        int maximum=0;
        depth(root,maximum,0);
        return maximum;
        
    }
};
