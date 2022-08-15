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
    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode*>q;
    q.push(root);
    bool flag=0;
    while(!q.empty()){
        int count=q.size();
        int max=-1;
        for(int i=0;i<count;i++){
            TreeNode* curr=q.front();
            q.pop();
            int data=curr->val;
            if(flag){
                 if(data%2==0){
                    if(max<=data && max!=-1)
                    return 0;
                    else
                    max=data;
                }
                else if(data%2!=0){
                    return 0;
                }
            }
            else{
                if(data%2!=0){
                    if(max>=data)
                    return 0;
                    else
                    max=data;
                }
                else if(data%2==0){
                    return 0;
                }
            }
            if(curr->left!=NULL) q.push(curr->left);
            if(curr->right!=NULL) q.push(curr->right);
        }
        flag=!flag;
    }
    return 1;

    }
};