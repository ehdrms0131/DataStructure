#include<stdio.h>
#include<stdlib.h>
#include<memory.h>

typedef struct TreeNode
{
	int data;
	struct TreeNode* left, * right;
} TreeNode;

TreeNode n1 = { 1,NULL,NULL };
TreeNode n2 = { 4,&n1,NULL };
TreeNode n3 = { 16,NULL,NULL };
TreeNode n4 = { 25,NULL,NULL };
TreeNode n5 = { 20,&n3,&n4 };
TreeNode n6 = { 15,&n2,&n5 };
TreeNode* root = &n6;

void inorder(TreeNode* root)
{
	if (root)
	{
		inorder(root->left);
		printf("%d ", root->data);
		inorder(root->right);
	}
	printf("\n");
}
void preorder(TreeNode* root)
{
	if (root)
	{
		inorder(root->left);
		printf("%d ", root->data);
		inorder(root->left);
	}
	printf("\n");
}
void postorder(TreeNode* root)
{
	if (root)
	{
		postorder(root->left);
		postorder(root->right);
		printf("%d ", root->data);
	}
	printf("\n");
}

TreeNode* searchNode(TreeNode *tree,int findData)
{
	if (tree == NULL)
	{
		return NULL;
	}
	if (tree->data == findData)
	{
		printf("값 발견\n");
		return tree;
	}
	else if (tree->data > findData)
	{
		searchNode(tree->left, findData);
	}
	else
		searchNode(tree->left, findData);
}

int main()
{
	int tf = 0;

	printf("찾을 노드 값 입력 : ");
	scanf_s("%d", &tf);

	searchNode(root, tf);

	if(tf!=NULL)
		printf("%d",tf);


	/*
	inorder(root);
	preorder(root);
	postorder(root);
	*/

	return 0;
}