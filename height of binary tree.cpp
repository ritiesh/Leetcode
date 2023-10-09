class Solution{
    public:
    
    int height(struct Node* node){
        if(node==NULL)
        {
            return 0;
        }
        int lf=height(node->left);
        int rf=height(node->right);
        return 1+max(lf,rf);
        
    }
};
