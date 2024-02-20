/*
�ش� ��ũ�帮��Ʈ�� �⺻���� �������� ����,Ž��,ī����, ��ü���� �ϴ� ��ɸ��� �ο��Ѵ�.
*/

#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef struct _node
{
    int data;
    struct _node *next;

} Node;

typedef struct _LinkedList
{
    Node *head;
    Node *tail;
    Node *curr;
    int NumOfData;

} List;

void ListInit(List *list);
void ListInsert(List *list, int data); // tail�� �����͸� �߰��ϴ� ���
void LinearSearch(List *list);
int IsEmpty(List *list);
int Count(List *list);
void DeleteAll(List *list); // ������ ������(���)�� ��� ����, ������ head���� ����

int main()
{

    List list;
    ListInit(&list);
    IsEmpty(&list);

    printf("������ ���� ...\n\n");
    ListInsert(&list, 10);
    ListInsert(&list, 42);
    ListInsert(&list, 54);
    ListInsert(&list, 66);
    ListInsert(&list, 89);

    printf("������ ��� : ");
    LinearSearch(&list);
    printf("\n\n");

    printf("������ ���� ����\n");
    RemoveAll(&list);
    IsEmpty(&list);
    return 0;
}

void ListInit(List *list)
{
}

void ListInsert(List *list, int data)
{
}

int IsEmpty(List *list)
{
}

int Count(List *list)
{
}

void LinearSearch(List *list)
{
}

void DeleteAll(List *list)
{
}