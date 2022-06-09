#include "sort.h"
/**
 *
 *
 *
 */
void insertion_sort_list(listint_t **list)
{
    listint_t *ahead = NULL, *node = NULL, *print = NULL;; 
    
    print = *list;
    ahead = *list;

    while(ahead)
    {
        printf("first while\n");
        while ((ahead->prev) && (ahead->n < ahead->prev->n))
        {
            printf("if\n");
            node = ahead->prev;

            if (ahead->prev->prev)
                ahead->prev->prev->next = ahead;
            ahead->prev = ahead->prev->prev;
            node->next = ahead->next;
            node->prev = ahead;
            ahead->next->prev = node;
            ahead->next = node;
            print_list(print);

            *list = ahead;
        }
        ahead = ahead->next;
        printf("FIN DEL WHILEi\n");
    }
}
