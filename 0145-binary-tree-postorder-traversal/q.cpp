class Solution {
public:
    vector<int> num={};
    vector<int> postorderTraversal(TreeNode* root) {
        if(root==nullptr)return num;//base case
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        num.push_back(root->val);//to push bacjk the value of the root
        return num;
    }
};
