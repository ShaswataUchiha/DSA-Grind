class Solution {
public:

    bool isMirror(TreeNode* p, TreeNode* q){
        if(!p && !q) return true;

        if(p && q){
            return (p->val == q->val)
                && isMirror(p->right, q->left)
                && isMirror(p->left, q->right);
        }
        return false;
    }

    bool isSymmetric(TreeNode* root) {
        return isMirror(root->left, root->right);
    }
};