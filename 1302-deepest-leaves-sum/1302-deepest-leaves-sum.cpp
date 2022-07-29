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
     int sum=0;
    int height(TreeNode* root)
    {
        if(root==NULL) return 0;
        return 1+max(height(root->left),height(root->right));
    }
    void sumDeepLeaf(TreeNode* root,int max_depth,int l)
    {
        if(root!=NULL){
            if(l==max_depth)
                sum+=root->val;
        sumDeepLeaf(root->left,max_depth,l+1);
        sumDeepLeaf(root->right,max_depth,l+1);
        }
    }
    int deepestLeavesSum(TreeNode* root) {
       
        int maxDepth=height(root);
        cout<<maxDepth;
        sumDeepLeaf(root,maxDepth,1);
        return sum;
    }
};