#include <stdio.h>
#include <stdlib.h>
#include "SingleLinkList.h"

int main()
{
    printf("Hello JK!\n");

    List myList;
    myList = InitList(myList);

    // 循环从头插入10个元素
    int i = 0;
    for (i = 0; i < 10; ++i)
    {
        InsertElememt(i, myList, myList);
    }

    // 输出元素
    Position p = myList->next;
    while (p != NULL)
    {
        printf("%d ", p->element);
        p = p->next;
    }
    printf("\n");

    // 删除元素值为3的节点并输出删除后的链表
    DeleteElement(3, myList);
    p = myList->next;
    while (p != NULL)
    {
        printf("%d ", p->element);
        p = p->next;
    }
    printf("\n");

    // 清空链表
    EmptyList(myList);
    p = myList->next;
    while (p != NULL)
    {
        printf("%d ", p->element);
        p = p->next;
    }
    printf("\n");

    // 删除整个链表
    DeleteList(myList);

    return 0;
}
