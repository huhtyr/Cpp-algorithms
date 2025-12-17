#include <iostream>
#include <vector>
using namespace std;
class TreeNode{
    public:
        int val;
        TreeNode* left;
        TreeNode* right;

        //constructor 1
        TreeNode(int val_, TreeNode* left_, TreeNode* right_){
            val = val_;
            left = left_;
            right = right_;
        }

        //constructor 2
        TreeNode(int val_){
            val = val_;
            left = NULL;
            right = NULL;
        }
};

/*
Tree structure:
                        level
        1                 1
      /   \             
     2    10              2
    / \   / \
   4   5 6  -3            3   
*/

void pathSum(TreeNode* root, int targetSum, int sum, int& cnt){
    if(!root)   return;
    sum += root->val;
    if(sum == targetSum){
        cnt++;
    }
    pathSum(root->left, targetSum, sum, cnt);
    pathSum(root->right, targetSum, sum, cnt);
}

    void traversal(TreeNode* root, int targetSum, int sum, int& cnt){
        if(!root)   return;
        pathSum(root, targetSum, sum, cnt);
    }

int main(){
    TreeNode* root = new TreeNode(1);
    TreeNode* a = new TreeNode(2);
    TreeNode* b = new TreeNode(10);
    TreeNode* c = new TreeNode(4);
    TreeNode* d = new TreeNode(5);
    TreeNode* e = new TreeNode(6);
    TreeNode* f = new TreeNode(-3);
    root->left = a;
    root->right = b;
    a->left = c;
    a->right = d;
    b->left = e;
    b->right = f;

    //function to return no. of paths whose sum == targetSum
    int targetSum = 7;
    // cout<<"enter target sum: ";
    // cin>>targetSum;
    int count = 0;
    traversal(root, targetSum, 0, count);
    cout<<"answer = "<<count<<endl;
    return 0;
}