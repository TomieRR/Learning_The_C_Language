#include <stdio.h>
#include <stdlib.h>

struct element{
    int x;
    struct element *next;
};

int main()
{
    struct element *head = malloc(sizeof(struct element));
    head->x = 5;

    struct element *sec = malloc(sizeof(struct element));
    sec->x = -3;
    sec->next = NULL;

    head->next = sec;

    struct element *current = head;
    while (current != NULL){
        printf("%d\n", current->x);
        current = current->next;
    }
    free(head);
    free(sec);
    return 0;
}
