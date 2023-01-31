#include <stdlib.h>
#include <stdio.h>

#include "linked_list.h"

int main()
{
    LinkedList list = NULL;
    
    Node *node = create_node(2);
    
    list = insert_front(list, node);
    
    list = insert_front(list, create_node(3));
    
    print_list(list);
    
    free_list(list);
    
    return 0;
}