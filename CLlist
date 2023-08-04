
//Circular Link List 2v

#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} node;

void insert(node *pointer, int data)
{
    node *start = pointer;

    while (pointer->next != start)
    {
        pointer = pointer->next;
    }
    
    pointer->next = (node *)
    malloc(sizeof(node));
    pointer = pointer->next;
    pointer->data = data;
    pointer->next = start;
    printf("%d entered.\n", data);
}

int find(node *pointer, int key)
{
    node *start = pointer;
    pointer = pointer->next;
    while (pointer != start)
    {
        if (pointer->data == key)
        {
            return 1;
        }
        pointer = pointer->next;
    }
    return 0;
}

void delete(node *pointer, int data)
{
    node *start = pointer;
    while(pointer->next!=start &&
    (pointer->next)->data != data)
    {
        pointer = pointer->next;
    }
    if(pointer->next==start)
    {
        printf("Element %d is not present in the list\n",data);
        return;
    }
    node *temp;
    temp = pointer->next;
    printf("%d deleted.\n",data);
    pointer->next = temp->next;
    free(temp);
    return;
}

void print(node *start, node *pointer)
{
    if (pointer == start)
    {
        return;
    }
    printf("%d ", pointer->data);
    print(start, pointer->next);
}

int main()
{
    node *start, *temp;
    start = (node *) malloc(sizeof(node));
    temp = start;
    temp->next = start;
    printf("1. Insert\n");
    printf("2. Delete\n");
    printf("3. Print\n");
    printf("4. Find\n");
    while (1)
    {
        int query;
        scanf("%d", &query);
        if (query == 1)
        {
            int data;
            scanf("%d", &data);
            insert(start, data);
        }
        else if (query == 2)
        {
            int data;
            scanf("%d", &data);
            delete (start, data);
        }
        else if (query == 3)
        {
            printf("The list is ");
            print(start, start->next);
            printf("\n");
        }
        else if (query == 4)
        {
            int data;
            scanf("%d", &data);
            int status = find(start, data);
            if (status)
            {
                printf("Element Found\n");
            }
            else
            {
                printf("Element Not Found\n");
            }
        }
    }
}


______________________________
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} customNode;

void add(customNode* pointer, int data) {
    customNode* start = pointer;

    while (pointer->next != start) {
        pointer = pointer->next;
    }

    pointer->next = (customNode*)malloc(sizeof(customNode));
    pointer = pointer->next;
    pointer->data = data;
    pointer->next = start;
    printf("%d entered.\n", data);
}

int search(customNode* pointer, int key) {
    customNode* start = pointer;
    pointer = pointer->next;
    while (pointer != start) {
        if (pointer->data == key) {
            return 1;
        }
        pointer = pointer->next;
    }
    return 0;
}

void removeNode(customNode* pointer, int data) {
    customNode* start = pointer;
    while (pointer->next != start && (pointer->next)->data != data) {
        pointer = pointer->next;
    }
    if (pointer->next == start) {
        printf("Element %d is not present in the list\n", data);
        return;
    }
    customNode* temp;
    temp = pointer->next;
    printf("%d deleted.\n", data);
    pointer->next = temp->next;
    free(temp);
    return;
}

void display(customNode* start, customNode* pointer) {
    if (pointer == start) {
        return;
    }
    printf("%d ", pointer->data);
    display(start, pointer->next);
}

int main() {
    customNode* start, * temp;
    start = (customNode*)malloc(sizeof(customNode));
    temp = start;
    temp->next = start;
    printf("1. Add\n");
    printf("2. Remove\n");
    printf("3. Display\n");
    printf("4. Search\n");

    while (1) {
        int query;
        scanf("%d", &query);
        if (query == 1) {
            int data;
            scanf("%d", &data);
            add(start, data);
        }
        else if (query == 2) {
            int data;
            scanf("%d", &data);
            removeNode(start, data);
        }
        else if (query == 3) {
            printf("The list is ");
            display(start, start->next);
            printf("\n");
        }
        else if (query == 4) {
            int data;
            scanf("%d", &data);
            int status = search(start, data);
            if (status) {
                printf("Element Found\n");
            }
            else {
                printf("Element Not Found\n");
            }
        }
    }
}
