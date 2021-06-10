/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 int f=1;
int traverse(TreeNode* A)
{
    if(!A)
    {
        return 0;
    }
    
    int left=traverse(A->left);
    int right=traverse(A->right);
    
    if(abs(left-right)>1)
        f=0;
    
    return max(left,right)+1;
    
}

int Solution::isBalanced(TreeNode* A) {
    f=1;
    traverse(A);
    
    return f;
    
    
}
