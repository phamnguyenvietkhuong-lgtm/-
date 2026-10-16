#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node *first = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));

    if (first == NULL || second == NULL) {
        printf("無效");
        return 1;
    }

    first->data = 20;
    second->data = 30;

    first->next = second;
    second->next = NULL;

    printf("First Node: %d\n", first->data);
    printf("Second Node: %d\n", first->next->data);

    free(first);
    free(second);

    return 0;
}