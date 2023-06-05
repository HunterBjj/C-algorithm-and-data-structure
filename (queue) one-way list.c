#include <stdlib.h>
#include <stdio.h>

typedef node {
    int value;
    struct node *next; // определяем указатель только на последующий узел
} 

typedef linked_list {
    struct node *head;
    struct node *tail;
}

// Первая функция, как обычно, создаёт экземпляр структуры linked_List
void init(linked_list *l) {
    l->head = NULL;
    l->tail = NULL;
}