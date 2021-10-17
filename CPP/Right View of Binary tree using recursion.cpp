#include <iostream>
#include <vector>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : 
                      val(x), left(left), right(right) {}
};
TreeNode *BuildTree()
{
    int d;
    cin >> d;
    if (d == -1)
        return NULL;
    TreeNode *Node = new TreeNode(d);
    cout << "enter left child of " << d << " : ";
    Node->left = BuildTree();
    cout << "enter right child of " << d << " : ";
    Node->right = BuildTree();
    return Node;
}
void print(TreeNode *root)
{
    if (root == NULL)
        return;
    cout << root->val << " ";
    print(root->left);
    print(root->right);
}
void RightView(TreeNode *root, int level, int &maxLevel)
{
    if (root == NULL)
        return;
    if (level > maxLevel)
    {
        cout << root->val << " ";
        maxLevel = level;
    }
    RightView(root->right, level + 1, maxLevel);
    RightView(root->left, level + 1, maxLevel);
}
int main()
{
    TreeNode *root = BuildTree();
    cout << "Preorder of tree is: ";
    print(root);
    cout << "\nThe Right view is: ";
    int max_level = -1;
    int level = 0;
    RightView(root, level, max_level);
}
