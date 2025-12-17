#include <iostream>
#include <vector>
#include <queue>
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

void levelOrderQueue(TreeNode* root){
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()){
        TreeNode* temp = q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left)  q.push(temp->left);
        if(temp->right) q.push(temp->right);
    }
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
    levelOrderQueue(root);
    return 0;
}