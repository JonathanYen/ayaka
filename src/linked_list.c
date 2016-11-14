#include <stdio.h>


struct single_linked_list
{
   int data;
   struct single_linked_list* next;
};

int main(void)
{
    struct single_linked_list list;
    struct single_linked_list list2;
    
    list.next = &list2;
    printf("size of linked list = (%ld)\n", sizeof(struct single_linked_list));
    printf("list addr(%p), list.next addr(%p)\n",&list, list.next);
    printf("list2 addr(%p)\n",&list2);
    return 0;    
}
