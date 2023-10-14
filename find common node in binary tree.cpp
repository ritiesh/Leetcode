class Solution
{
    public:
    void preorder(Node *root,vector<int>&v1)
    {
        if(root==NULL)
        {
            return;
        }
        v1.push_back(root->data);
        preorder(root->left);
        preorder(root->right);
    }
    vector <int> findCommon(Node *root1, Node *root2)
    {
           vector<int>v1,v2;
           preorder(root1,v1);
           return v1;
    }
};
