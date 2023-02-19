class Solution {
public:
    bool checkTree(TreeNode* root) {
        if(root==NULL||root->left==NULL && root->right==NULL)
        return false;
        if(root->left->val+root->right->val==root->val)
        return true;
        else 
        return false;
    }
};
