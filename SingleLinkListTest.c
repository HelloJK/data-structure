#include <stdio.h>
#include <stdlib.h>
#include "SingleLinkList.h"

int main()
{
    printf("Hello JK!\n");

    List myList;
    myList = InitList(myList);

    // ѭ����ͷ����10��Ԫ��
    int i = 0;
    for (i = 0; i < 10; ++i)
    {
        InsertElememt(i, myList, myList);
    }

    // ���Ԫ��
    Position p = myList->next;
    while (p != NULL)
    {
        printf("%d ", p->element);
        p = p->next;
    }
    printf("\n");

    // ɾ��Ԫ��ֵΪ3�Ľڵ㲢���ɾ���������
    DeleteElement(3, myList);
    p = myList->next;
    while (p != NULL)
    {
        printf("%d ", p->element);
        p = p->next;
    }
    printf("\n");

    // �������
    EmptyList(myList);
    p = myList->next;
    while (p != NULL)
    {
        printf("%d ", p->element);
        p = p->next;
    }
    printf("\n");

    // ɾ����������
    DeleteList(myList);

    return 0;
}
