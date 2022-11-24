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