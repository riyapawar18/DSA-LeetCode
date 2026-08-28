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
    void inorder(TreeNode* root, stack<int>&s)
    {
        if(root == NULL)
        {
            return ;
        }
        inorder(root->left,s);
        s.push(root->val);
        inorder(root->right,s);
    }
    TreeNode* increasingBST(TreeNode* root) {
        stack<int> s;
        inorder(root,s);
        vector<int> arr;
        if(s.empty())
        {
            return NULL;
        }
        while(!s.empty())
        {
            arr.push_back(s.top());
            s.pop();
        }
        TreeNode* newroot = new TreeNode(arr.back());
        arr.pop_back();
        TreeNode* curr = newroot;
        while(!arr.empty())
        {
            curr->right = new TreeNode(arr.back());
            arr.pop_back();
            curr=curr->right;
        }
        return newroot;
    }
};