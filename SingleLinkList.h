#ifndef _SINGLE_LINK_LIST_
#define _SINGLE_LINK_LIST_

typedef struct Node* pNode;
typedef pNode List;     // ListΪָ��ڵ��ָ��
typedef pNode Position; // PositionΪָ��ڵ��ָ��
typedef int ElementType;// ����Ԫ������

struct Node
{
    ElementType element; // �ڵ������
    Position    next;    // ָ����һ���ڵ��ָ��
};

List InitList(List L);// ��ʼ��
int IsEmpty(List L);// �Ƿ�Ϊ��
int IsLast(Position P, List L);// P�Ƿ�ָ�����һ��Ԫ��
Position FindElement(ElementType E, List L);// ��L��Ѱ�ҵ�һ������ֵΪE�Ľڵ㣬����ָ��ýڵ��ָ��
void DeleteElement(ElementType E, List L);// ��L��ɾ����һ������ֵΪE�Ľڵ�
Position FindPrevious(ElementType E, List L);// ��L��Ѱ�ҵ�һ������ֵΪE�Ľڵ��ǰ��Ԫ������ָ��ǰ��Ԫ��ָ��,�Ҳ�������ָ�����һ���ڵ��ָ��
void InsertElememt(ElementType E, List L, Position P);// ��P��ָ��Ľڵ�����һ���ڵ㣬�ڵ�����ֵΪE
ElementType Retrive(Position P, List L);// ���P��ָ��ڵ������ֵ
void EmptyList(List L);// ���һ������
void DeleteList(List L);// ɾ��һ������

#endif // _SINGLE_LINK_LIST_
