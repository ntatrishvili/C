#include <stdio.h>
#include <stdlib.h>

typedef struct ListEl
{
    int data;
    struct ListEl *next;
} ListEl;

ListEl *list_build(void)
{
    int values[] = {8, 14, 13, 17, 1, 19, 16, 5, 3, 11, 2,
                    15, 9, 10, 6, 22, 4, 7, 18, 27, -1};
    ListEl *lis = NULL;

    int i;
    for (i = 0; values[i] != -1; ++i)
    {
        ListEl *u;
        u = (ListEl *)malloc(sizeof(ListEl));
        u->next = lis;
        u->data = values[i];
        lis = u;
    }
    return lis;
}

int listLength(ListEl *head)
{
    int len = 0;
    ListEl *temp = head;
    while (temp->next != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

void clearMemory(ListEl *head)
{
    ListEl *p = head;
    while (head->next != NULL)
    {
        ListEl *temp = p->next;
        free(p);
        p = temp;
    }
    free(p);
}

ListEl *list_insert_athead(ListEl *head, int data)
{
    ListEl *node;
    node = (ListEl *)malloc(sizeof(ListEl));
    node->data = data;
    node->next = head;
    return node;
}

int main()
{
    ListEl *head;

    head = list_build();

    // printf("%d\n", listLength(head));

    // for (int i = 0; head->next != NULL; i++)
    // {
    //     printf("%d ", head->data);
    //     head = head->next;
    // }

    head = list_insert_athead(head, 21);

    printf("\n");

    for (int i = 0; head->next != NULL; i++)
    {
        printf("%d ", head->data);
        head = head->next;
    }

    clearMemory(head);
    return 0;
}