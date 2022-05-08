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
    int countNodes(TreeNode* root, int &count,int &res){
        if(root==nullptr)
            return 0;
        int left_count=0,right_count=0;
        
        int left=countNodes(root->left,left_count,res);
        int right=countNodes(root->right,right_count,res);
        
        cout<<left_count<<" ";
        
        int sum=left+right+root->val;
        count=left_count+right_count+1;
        int avg=(sum/count);
        if(avg==root->val)
            res++;
        return sum;
    }
    int averageOfSubtree(TreeNode* root) {
        int count=0,res=0;
        int avg=countNodes(root,count,res);
        return res;
    }
   
};