#include <studio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
int main()
{
    struct Node *head;
        int *ptr;
        ptr=malloc(sizeof(int));
        if(ptr==NULL)
{
    printf(“無效");
        return 1;
}
    *ptr=10;
    printf("%d",*ptr);
    free(ptr);
    return 0;


}