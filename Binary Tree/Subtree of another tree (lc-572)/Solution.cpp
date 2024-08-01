class Solution {
public:
    bool checkFurther(TreeNode* s, TreeNode* p){
        if(!s && !p) return true;
        if(!s || !p) return false;
        return (s->val == p->val && checkFurther(s->left, p->left) && checkFurther(s->right, p->right));
    }

    void tarverseTree(TreeNode* s, TreeNode* p, bool &ans){
        if(ans) return;
        if(s->val == p->val && checkFurther(s, p)){
            ans = true;
            return;
        }

        if(s->left) tarverseTree(s->left, p, ans);
        if(s->right) tarverseTree(s->right, p, ans);
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        bool ans = false;
        tarverseTree(root, subRoot, ans);
        return ans;
    }
};