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
bool check(struct TreeNode* left, struct TreeNode* right)
{
	if (left == NULL && right == NULL)
	{
		return true;
	}
	else if (left == NULL || right == NULL)
	{
		return false;
	}
	else if (left->val != right->val)
	{
		return false;
	}
	return check(left->left, right->right) && check(left->right, right->left);
}

bool isSymmetric(struct TreeNode* root) {
	if (root == NULL)
		return true;
	return check(root->right, root->left);
}
//572. 另一棵树的子树
bool compare(struct TreeNode* p1, struct TreeNode* p2)
{
	if (!p1 && !p2)
		return true;
	if (!p1 || !p2)
		return false;
	if (p1->val != p2->val)
		return false;

	return compare(p1->left, p2->left) && compare(p1->right, p2->right);
}
bool isSubtree(struct TreeNode* s, struct TreeNode* t) {
	if (!s)
		return false;
	return compare(s, t) || isSubtree(s->left, t) || isSubtree(s->right, t);
}
//KY11 二叉树遍历

