#define _CRT_SECURE_NO_WARNINGS 1
#include<stdbool.h>

//leetcode NO.100 相同的树
bool isSameTree(struct TreeNode* p, struct TreeNode* q)
{
	if(p == NULL && q == NULL)
		return true;
	//其中一个为空
	if (p == NULL || q == NULL)
		return false;
	if (p->val != q->val)
		return false;

	return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}

//leetcode NO.
bool isSameTree2(struct TreeNode* p, struct TreeNode* q)
{
	if (p == NULL && q == NULL)
		return true;
	//其中一个为空
	if (p == NULL || q == NULL)
		return false;
	if (p->val != q->val)
		return false;

	return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}
bool isSubtree(struct TreeNode* root, struct TreeNode* subRoot)
{
	if (root == NULL)
		return false;
	if (isSameTree2(root, subRoot))
		return true;

	return isSubtree(root->left, subRoot)
		|| isSubtree(root->right, subRoot);
}

//104

int maxDepth(struct TreeNode* root) {
	if (root == NULL) return 0;
	return fmax(maxDepth(root->left), maxDepth(root->right)) + 1;
}

//二叉树的前序遍历
void hide(struct TreeNode* root, int* ret, int* returnSize)
{
	if (root == NULL)
		return;
	ret[(*returnSize)++] = root->val;
	hide(root->left, ret, returnSize);
	hide(root->right, ret, returnSize);
}
int* preorderTraversal(struct TreeNode* root, int* returnSize) {
	int* ret = (int*)malloc(sizeof(int) * 2000);
	*returnSize = 0;
	hide(root, ret, returnSize);
	return ret;
}

//翻转二叉树，//226
struct TreeNode* invertTree(struct TreeNode* root) {
	if (root == NULL)
		return NULL;

	struct TreeNode* left = invertTree(root->left);
	struct TreeNode* right = invertTree(root->right);

	root->left = right;
	root->right = left;

	return root;
}

//101. 对称二叉树
bool isSymmetric(struct TreeNode* root) {

}
//572. 另一棵树的子树
bool isSubtree(struct TreeNode* root, struct TreeNode* subRoot) {

}
//KY11 二叉树遍历

