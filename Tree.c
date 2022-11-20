#define _CRT_SECURE_NO_WARNINGS 1

int TreeHeight(BTNode* root)
{
	if (root == NULL)
	{
		return 0;
	}
	int left = TreeHeight(root->left);
	int right = TreeHeight(root->right);

	return left>right?left+1:right+1;
}