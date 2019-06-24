#pragma once
#pragma once
template <class T>
struct BTreeNode
{
	T data_;
	BTreeNode* left_;
	BTreeNode* right_;
	BTreeNode(const T& data)
		:data_(data)
		,left_(nullptr)
		,right_(nullptr)
	{}
};
template <class T>
class BTree
{
public:
	typedef BTreeNode<T> Node;
	typedef BTreeNode<T>* pNode;

	BTree()//�������
		:root_(nullptr)
	{}

private:
	pNode root_;
};
//����������
BTree<int>* BinaryTreeCreate(BTree<int>* arr, int size, int* sign);

//������������
void BinaryTreeDestroy(BTree<int> root);

//������
int BinaryTreeSize(BTree<int> root);

//Ҷ�ӵĸ���
int BinaryTreeLeafSize(BTree<int>* root);

//��K��Ҷ�ӽ��ĸ���
int BinaryTreeLevelKSize(BTree<int>* root, int k);

//���ҽ��
BTree<int>* BinaryTreeFindNode(BTree<int>* root, BTDataType data);

//ǰ�к����
void BinaryTreePrevorder(BTree<int>* root);
void BinaryTreeInorder(BTree<int>* root);
void BinaryTreePostorder(BTree<int>* root);

//�ǵݹ����
//�������
void BinaryTreeLevelorder(BTree<int>* root);

//�ж϶������Ƿ�����ȫ������
char* BinaryTreeComplete(BTree<int>* root);

//ǰ�к������
void BinaryTreePrevOrderNonP(BTree<int>* root);
void BinaryTreeInOrderNonP(BTree<int>* root);
void BinaryTreePostOrderNonP(BTree<int>* root);



#pragma once
#pragma once
template <class T>
struct BTreeNode
{
	T data_;
	BTreeNode* left_;
	BTreeNode* right_;
	BTreeNode(const T& data)
		:data_(data)
		,left_(nullptr)
		,right_(nullptr)
	{}
};
template <class T>
class BTree
{
public:
	typedef BTreeNode<T> Node;
	typedef BTreeNode<T>* pNode;

	BTree()//�������
		:root_(nullptr)
	{}

private:
	pNode root_;
};
//����������
BTree<int>* BinaryTreeCreate(BTree<int>* arr, int size, int* sign);

//������������
void BinaryTreeDestroy(BTree<int> root);

//������
int BinaryTreeSize(BTree<int> root);

//Ҷ�ӵĸ���
int BinaryTreeLeafSize(BTree<int>* root);

//��K��Ҷ�ӽ��ĸ���
int BinaryTreeLevelKSize(BTree<int>* root, int k);

//���ҽ��
BTree<int>* BinaryTreeFindNode(BTree<int>* root, BTDataType data);

//ǰ�к����
void BinaryTreePrevorder(BTree<int>* root);
void BinaryTreeInorder(BTree<int>* root);
void BinaryTreePostorder(BTree<int>* root);

//�ǵݹ����
//�������
void BinaryTreeLevelorder(BTree<int>* root);

//�ж϶������Ƿ�����ȫ������
char* BinaryTreeComplete(BTree<int>* root);

//ǰ�к������
void BinaryTreePrevOrderNonP(BTree<int>* root);
void BinaryTreeInOrderNonP(BTree<int>* root);
void BinaryTreePostOrderNonP(BTree<int>* root);