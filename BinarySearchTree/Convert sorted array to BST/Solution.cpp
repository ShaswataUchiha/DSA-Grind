class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int> &arr, int s, int e){
        if(s>e)
            return NULL;

        int mid = (s+e)/2;
        int element = arr[mid];
        TreeNode* root = new TreeNode(element);

        root->left = sortedArrayToBST(arr, s, mid-1);
        root->right = sortedArrayToBST(arr, mid+1, e);
        return root;    
    }


    TreeNode* sortedArrayToBST(vector<int>& nums) { 
        int size = nums.size();
        int s = 0;
        int e = size-1;
        TreeNode* root = sortedArrayToBST(nums, s, e);
        return root;
    }
};