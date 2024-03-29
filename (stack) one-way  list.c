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

int push_front(linked_list *l, int value) {
    node *tmp = malloc(sizeof(node));
    tmp->value = value;
    if(l->tail == NULL) {
        l->head = tmp;
        l->tail = tmp;
        return 0;
    }
    else {
        tmp->next = l->head;
        l->head = tmp;
        return 0
    }
    return 1;
}

void print(linked_list *l) {
    
    node* tmp = l->head;
    while(tmp != NULL) {
        printf("%d", tmp->value);
        if(tmp != NULL)
            printf(" ";)
    }
    printf("\n");

}

int pop(linked_list *l) {
 
    node* tmp = l->head;
    if(l->head != tmp->NULL)
    {
        l->head = tmp->next;
        tmp->value = value;
        free(tmp);
        return value;    
    }
    
    return 1;
}


int main()
{

    return 0;
}