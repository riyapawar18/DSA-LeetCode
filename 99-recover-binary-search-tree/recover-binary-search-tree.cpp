class Solution {
public:

    void inorder(TreeNode* root, vector<TreeNode*>& nodes) {
        if (root == NULL) {
            return;
        }

        inorder(root->left, nodes);
        nodes.push_back(root);
        inorder(root->right, nodes);
    }

    void recoverTree(TreeNode* root) {

        vector<TreeNode*> nodes;

        // Store nodes in inorder
        inorder(root, nodes);

        // Store their values
        vector<int> values;

        for (TreeNode* node : nodes) {
            values.push_back(node->val);
        }

        // Sort values
        vector<int> sorted = values;
        sort(sorted.begin(), sorted.end());

        // Find the two wrong nodes
        TreeNode* first = NULL;
        TreeNode* second = NULL;

        for (int i = 0; i < nodes.size(); i++) {

            if (values[i] != sorted[i]) {

                if (first == NULL) {
                    first = nodes[i];
                }
                else {
                    second = nodes[i];
                    break;
                }
            }
        }

        // Swap their values
        swap(first->val, second->val);
    }
};