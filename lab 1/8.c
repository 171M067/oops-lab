#include<stdio.h>
struct node
{
    int INFO;
    struct node *next;
};
typedef struct node * node;
void check_loop(node start)
{
    node s=start,f=start;
    while(s!=NULL&&f!=NULL&&f->next==NULL)
    {
        s=s->next;
        f=f->next->next;
        if(s==f)
        {
            printf("given linked list contains loop");
            break;
        }
    }
    f->next=NULL;
}
