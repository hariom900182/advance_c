#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int value;
    struct Node *next;
} * node_t;

typedef struct Node lnode;

void insert(lnode **head, int value);
void insert_at_begining(lnode **head, int value);
void insert_at_last(lnode **head, int value);
int find(lnode *head, int value);
void remove_node(lnode **head, int value);
void display(lnode *head);

int main(void)
{
    int ch, value;
    lnode *head = NULL;
    do
    {
        // print menu
        puts("1: insert in sorted order");
        puts("2: insert at begining");
        puts("3: insert at end");
        puts("4: find value in list");
        puts("5: remove from list");
        puts("6: display");
        // end menu
        printf("\nEnter your choice(1-6):>  ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter value to insert:> ");
            scanf("%d", &value);
            insert(&head, value);
            break;
        case 2:
            printf("Enter value to insert:> ");
            scanf("%d", &value);
            insert_at_begining(&head, value);
            break;
        case 3:
            printf("Enter value to insert:> ");
            scanf("%d", &value);
            insert_at_last(&head, value);
            break;
        case 4:
            printf("Enter value to find:> ");
            scanf("%d", &value);
            printf("\nvalue found at index: %d\n", find(head, value));
            break;
        case 5:
            printf("Enter value to remove:> ");
            scanf("%d", &value);
            remove_node(&head, value);
            break;
        case 6:
            display(head);
            break;
        default:
            printf("\n**Thanks**\n");
            break;
        }
    } while (ch > 0 && ch <= 6);
    if (head != NULL)
        free(head);
    return 0;
}

void display(lnode *head)
{
    if (head == NULL)
    {
        printf("\n***Empty list***\n\n");
        return;
    }
    lnode *t;
    t = head;
    printf("\n");
    while (t != NULL)
    {
        printf("%d ->", t->value);
        t = t->next;
    }
    printf("NULL\n");
}

void insert(lnode **head, int value)
{
    lnode *p, *t;
    p = t = NULL;
    p = *head;
    lnode *temp = malloc(sizeof(lnode));
    if (!temp)
    {
        printf("\nMemory overflow\n");
        return;
    }
    temp->value = value;
    temp->next = NULL;
    while (p != NULL && p->value < value)
    {

        t = p;
        p = p->next;
    }
    if (p == NULL)
        insert_at_last(head, value);
    else if (p == *head)
    {
        insert_at_begining(head, value);
    }
    else
    {
        temp->next = t->next;
        t->next = temp;
    }
}

void insert_at_begining(lnode **head, int value)
{
    lnode *t = malloc(sizeof(lnode));
    if (!t)
    {
        printf("\nMemory overflow\n");
        return;
    }
    t->value = value;
    t->next = NULL;
    if (head)
    {
        t->next = *head;
        *head = t;
    }
    else
    {
        *head = t;
    }
}

void insert_at_last(lnode **head, int value)
{
    lnode *p;
    lnode *t = malloc(sizeof(lnode));
    if (!t)
    {
        printf("\nMemory overflow\n");
        return;
    }
    t->value = value;
    t->next = NULL;
    if (!*head)
    {
        *head = t;
    }
    else
    {
        p = *head;
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = t;
    }
}

int find(lnode *head, int value)
{
    int index = -1;

    lnode *p = head;
    while (p != NULL)
    {
        ++index;
        if (p->value == value)
        {
            return index;
        }
        p = p->next;
    }
    return index;
}

void remove_node(lnode **head, int value)
{
    lnode *p, *t;
    p = t = NULL;
    p = *head;
    if (p == NULL)
    {
        printf("\n***Empty list***\n");
        return;
    }
    while (p != NULL)
    {
        if (p->value == value)
        {
            break;
        }
        t = p;
        p = p->next;
    }
    if (p != NULL)
    {
        if (t != NULL)
            t->next = p->next;
        if (p == *head)
            *head = NULL;
        free(p);
    }
}