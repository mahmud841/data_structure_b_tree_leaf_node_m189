/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

int mx = 0;
int maxHeight(TreeNode<int> *root) {
  if (root == NULL)
    return 0;
  int l = maxHeight(root->left);
  int r = maxHeight(root->right);
  int diameter = l + r;
  mx = max(mx, diameter);
  return max(l, r) + 1;
}
int diameterOfBinaryTree(TreeNode<int> *root) {
  // Write Your Code Here.
  mx=0;
  int h= maxHeight(root);
//   int l = maxHeight(root->left);
//   int r = maxHeight(root->right);
  int diameter = l + r;
  return max(mx, diameter);
}
