


/**
 * Given the root of a binary tree, the level of its root is 1, the level of its children is 2, and so on.

Return the smallest level x such that the sum of all the values of nodes at level x is maximal.
*/
 
class Solution {
    vector<int> maxSum(2);
public:
    int maxLevelSum(TreeNode* root) {
        maxSum[0] = root->val;
        maxSum[1] = 1;
        DFS(root, level, maxSum);
        return maxSum[1];
    }
    void DFS(TreeNode* node,){
        if(!node) return;
        sum += node->val;
        if(sum > maxSum){
            maxSum[0] = sum;
            maxSum[1] = level;
        }
        DFS(node->left, level+1, sum);

    }
};
