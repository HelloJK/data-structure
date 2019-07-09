#ifndef _SINGLE_LINK_LIST_
#define _SINGLE_LINK_LIST_

typedef struct Node* pNode;
typedef pNode List;     // List为指向节点的指针
typedef pNode Position; // Position为指向节点的指针
typedef int ElementType;// 定义元素类型

struct Node
{
    ElementType element; // 节点的数据
    Position    next;    // 指向下一个节点的指针
};

List InitList(List L);// 初始化
int IsEmpty(List L);// 是否为空
int IsLast(Position P, List L);// P是否指向最后一个元素
Position FindElement(ElementType E, List L);// 在L中寻找第一个数据值为E的节点，返回指向该节点的指针
void DeleteElement(ElementType E, List L);// 在L中删除第一个数据值为E的节点
Position FindPrevious(ElementType E, List L);// 在L中寻找第一个数据值为E的节点的前驱元，返回指向前驱元的指针,找不到返回指向最后一个节点的指针
void InsertElememt(ElementType E, List L, Position P);// 在P所指向的节点后插入一个节点，节点数据值为E
ElementType Retrive(Position P, List L);// 获得P所指向节点的数据值
void EmptyList(List L);// 清空一个链表
void DeleteList(List L);// 删除一个链表

#endif // _SINGLE_LINK_LIST_
