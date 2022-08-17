/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool findPath(TreeNode* root,vector<TreeNode*>&p,TreeNode* n){
        if(root==NULL) return false;
        p.push_back(root);
        if(root==n)
            return true;
        else if(findPath(root->left,p,n) || findPath(root->right,p,n))
            return true;
        p.pop_back();
        return false;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*>p1,p2;
        if(!findPath(root,p1,p) || !findPath(root,p2,q)) 
            return NULL;
        TreeNode* ans=NULL;
        for(int i=0;i<p1.size() && i<p2.size();i++){
            if(p1[i]==p2[i])
                ans=p1[i];
            else
                break;
        }
        return ans;
    }
};