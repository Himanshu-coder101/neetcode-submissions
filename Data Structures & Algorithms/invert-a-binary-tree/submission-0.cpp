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
    void invertfnc(TreeNode * st){
        if(st==nullptr){
            return;
        }
        invertfnc(st->left);
        invertfnc(st->right);
        swap(st->left,st->right);

    }
    TreeNode* invertTree(TreeNode* root) {
        invertfnc(root);
        return root;
    }
};
