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
    bool isSame(TreeNode * first,TreeNode* second){
        if(!first && !second){return true;}
        else if((!first && second) || (!second && first)){return false;}
        else{
            if(first->val==second->val){
                return (isSame(first->left,second->left) && isSame(first->right,second->right));
            }
            else{
                return false;
            }
        }
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(!root){return false;}
        if(isSame(root,subRoot)){return true;}
        else{return (isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot));}
    }
};
