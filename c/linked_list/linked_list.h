#include "node.h"

LinkedList insert_front(LinkedList list, Node *node);

void insert_end(LinkedList list, Node *node);

void remove_front(LinkedList list);

void remove_end(LinkedList list);

void print_list(LinkedList list);

void free_list(LinkedList list);

Node* create_node(int data);