#include <stdlib.h>
#include <stdio.h>

#include "linked_list.h"

LinkedList insert_front(LinkedList list, Node *node)
{
    if (list == NULL)
    {
        list = node;
    }
    else
    {
        node->nextNode = list;
        list = node;
    }
    
    return list;
}

void insert_end(LinkedList list, Node *node)
{
    
}

void remove_front(LinkedList list)
{
    Node *tmp = list;
    list = list->nextNode;

    printf("Removed: %i", tmp->info);

    free(tmp);
    
}

void remove_end(LinkedList list)
{

}

void print_list(LinkedList list)
{
    for (Node *tmp = list; tmp != NULL; tmp = tmp->nextNode)
    {
        if (tmp->nextNode != NULL)
        {
            printf("%i -> ", tmp->info);
        }
        else
        {
            printf("%i\n", tmp->info);
        }
    }
}

void free_list(LinkedList list)
{

}

Node* create_node(int data)
{
    Node *n = (Node*)malloc(sizeof(Node));
    if (n == NULL)
    {
        return NULL;
    }
    n->info = data;
    n->nextNode = NULL;

    return n;
}