#include <vector>
#include <iostream>
using namespace std;

class TreeNode{
    public:
        int val;
        TreeNode* left;
        TreeNode* right;
        
        //constructor 1
        TreeNode(int val_){
            val = val_;
            left = NULL;
            right = NULL;
        }

        //constructor 2
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
   4  5  6   N            3   

*/

int levels(TreeNode* root){
    if(root == NULL)    return 0;
    return 1 + max(levels(root->left), levels(root->right));
}

void levelTraversal(TreeNode* root, int currLevel, int reqLevel, vector<int>& ans){
    if(root == NULL)    return;
    cout<<root->val<<" ";
    if(currLevel == reqLevel){
        ans[currLevel] = root->val;
        return;
    }
    levelTraversal(root->left, currLevel+1, reqLevel, ans);
    levelTraversal(root->right, currLevel+1, reqLevel, ans);
}
vector<int> rightSideView(TreeNode* root){
    int n = levels(root);
    vector<int> ans(n, 0);
    for(int i = 0; i < n; i++){
        levelTraversal(root, 0, i, ans);
        // for(auto x : ans)   cout<<x<<" ";
        cout<<endl;
    }
    return ans;
}

int main(){
    TreeNode* root = new TreeNode(1);
    TreeNode* a = new TreeNode(2);
    TreeNode* b = new TreeNode(3);
    TreeNode* c = new TreeNode(4);
    TreeNode* d = new TreeNode(5);
    TreeNode* e = new TreeNode(6);
    // TreeNode* f = new TreeNode(7);
    root->left = a;
    root->right = b;
    a->left = c;
    a->right = d;
    b->left = e;
    // b->right = f;

    vector<int> ans;
    ans = rightSideView(root);
    return 0;
}
