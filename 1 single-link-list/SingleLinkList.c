
#include <stdlib.h>
#include <stddef.h>
#include <assert.h>
#include "SingleLinkList.h"


List InitList(List L)
{
    L = (struct Node*)malloc(sizeof(struct Node));
    L->next = NULL;
    return L;
}

int IsEmpty(List L)
{
    return L->next == NULL;
}

int IsLast(Position P, List L)
{
    return P->next == NULL;
}

Position FindElement(ElementType E, List L)
{
    Position p;
    while(p != NULL && p->element != E)
    {
        p = p->next;
    }
    return p;
}

void DeleteElement(ElementType E, List L)
{
    Position p, tmp;
    p = FindPrevious(E, L);
    if (!IsLast(p, L))
    {
        tmp = p->next;
        p->next = tmp->next;
        free(tmp);
    }
}

Position FindPrevious(ElementType E, List L)
{
    Position p;
    p = L;
    while(p->next != NULL && p->next->element != E)
    {
        p = p->next;
    }
    return p;
}

void InsertElememt(ElementType E, List L, Position P)
{
    pNode tmp = (struct Node*)malloc(sizeof(struct Node));
    assert(tmp != NULL);

    tmp->element = E;
    tmp->next = P->next;
    P->next = tmp;
}

ElementType Retrive(Position P, List L)
{
    /*if (P != L)//确定P指向的不是头结点
    {
        return P->element;
    }*/
    return P->element;
}

void EmptyList(List L)
{
    Position p, tmp;
    p = L->next;
    L->next = NULL;
    while (p != NULL)
    {
        tmp = p;
        p = p->next;
        free(tmp);
    }
}

void DeleteList(List L)
{
    EmptyList(L);
    free(L);
}


