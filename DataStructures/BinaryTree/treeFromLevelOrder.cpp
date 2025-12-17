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
TreeNode* treeFromArray(vector<int> v){
    TreeNode* root = new TreeNode(v[0]);
    queue<TreeNode*> q;
    q.push(root);
    int i = 1, j = 2;
    while((i < v.size() && j < v.size()) && !q.empty()){
        TreeNode* temp = q.front();
        q.pop();
        TreeNode* l;
        TreeNode* r;
        if(v[i] != INT_MIN){
            l = new TreeNode(v[i]);
            q.push(l);
        }
        else    l = NULL;
        if(v[j] != INT_MIN){
            r = new TreeNode(v[j]);
            q.push(r);
        }
        else    r = NULL;
        temp->left = l;
        temp->right = r;
        i += 2;
        j += 2;
    }
    return root;
}
void BFSPrint(TreeNode* root){
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()){
        TreeNode* temp = q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left != NULL)    q.push(temp->left);
        if(temp->right != NULL)    q.push(temp->right);
    }
}
/*
Tree:
            1
           / \
          2   3
         / \   \
        4   5   6
*/
int main(){
    vector<int> v = {1, 2, 3, 4, 5, INT_MIN, 6};//INT_MIN = NULL
    TreeNode* root = treeFromArray(v);
    BFSPrint(root);
    return 0;
}