#include <iostream>
#include <vector>
using namespace std;
class TreeNode{
    public:
        int val;
        TreeNode* left;
        TreeNode* right;
        TreeNode(int val_){
            val = val_;
            left = NULL;
            right = NULL;
        }
        TreeNode(int val_, TreeNode* left_, TreeNode* right_){
            val = val_;
            left = left_;
            right = right_;
        }
};

/*
Tree structure:
                        level
        1                 1
      /   \             
     2     3              2
    / \   / \
   4  5  6   7            3   

*/

void kthLevel(TreeNode* root, int level, int reqLevel){
    if(root == NULL)    return;
    if(level == reqLevel)   cout<<root->val<<" ";
    kthLevel(root->left, level+1, reqLevel);
    kthLevel(root->right, level+1, reqLevel);
}
int main(){
    TreeNode* root = new TreeNode(1);
    TreeNode* a = new TreeNode(2);
    TreeNode* b = new TreeNode(3);
    TreeNode* c = new TreeNode(4);
    TreeNode* d = new TreeNode(5);
    TreeNode* e = new TreeNode(6);
    TreeNode* f = new TreeNode(7);
    root->left = a;
    root->right = b;
    a->left = c;
    a->right = d;
    b->left = e;
    b->right = f;

    int reqLevel = 3;
    kthLevel(root, 1, reqLevel);
    return 0;
}
