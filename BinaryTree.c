#define _CRT_SECURE_NO_WARNINGS 1
#include"BinaryTree.h"

BTNode* CreateBTNode(BTDataType x)
{
	BTNode* node = (BTNode*)malloc(sizeof(BTNode));
	if (node == NULL)
	{
		perror("malloc fail");
		exit(-1);
	}
	node->_data = x;
	node->left = node->right = NULL;
	return node;
}
// ����������
void BinaryTreeDestory(BTNode* root)
{
	if (root == NULL)
	{
		//�Ƿ�
		return;
	}
	BinaryTreeDestory((*root)->left);
	BinaryTreeDestory((*root)->right);
	free(root);

}
int size = 0;
// �������ڵ����
void BinaryTreeSize(BTNode* root)
{
	if (root == NULL)
		return; 
	size++;
	BinaryTreeSize(root->left);
	BinaryTreeSize(root->right);

}
// ������Ҷ�ӽڵ����
int BinaryTreeLeafSize(BTNode* root)
{
	if (root == NULL)
	{
		return 0;
	}
	if (root->left == NULL && root->right == NULL)
	{
		return 1;
	}
	return BinaryTreeLeafSize(root->left) + BinaryTreeLeafSize(root->right);
}
// ��������k��ڵ����
int BinaryTreeLevelKSize(BTNode* root, int k)
{
	if (root == NULL)
		return 0;
	if (k == 1)
		return 1;
	//k>1 ������k-1
	return BinaryTreeLevelKSize(root->left, k - 1)
		&& BinaryTreeLevelKSize(root->right, k - 1);
}
// ����������ֵΪx�Ľڵ�
BTNode* BinaryTreeFind(BTNode* root, BTDataType x)
{
	if (root == NULL)
		return NULL;
	if (root->_data == x)
		return root->_data;
	BTNode* ret1 = BinaryTreeFind(root->left, x);
	if (ret1)
		return ret1;
	BTNode* ret2 = BinaryTreeFind(root->right, x);
	if (ret2)
		return ret2;

	return NULL;
}
// ������ǰ����� 
void BinaryTreePrevOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL");
		return;
	}
	printf("%d", root->_data);
	BinaryTreePrevOrder(root->left);
	BinaryTreePrevOrder(root->right);

}
// �������������
void BinaryTreeInOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL");
		return;
	}
	BinaryTreePrevOrder(root->left);
	printf("%d", root->_data);
	BinaryTreePrevOrder(root->right);
}
// �������������
void BinaryTreePostOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL");
		return;
	}
	BinaryTreePrevOrder(root->left);
	BinaryTreePrevOrder(root->right);
	printf("%d", root->_data);
}
// �������
void BinaryTreeLevelOrder(BTNode* root)
{

}
// �ж϶������Ƿ�����ȫ������
int BinaryTreeComplete(BTNode* root)
{

}