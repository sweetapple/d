#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct node 
{
    int number;
    char name [20];
    struct node *next;
};
typedef struct node V_NODE;
V_NODE *create_link (int n);
void print_link (V_NODE *head);               //此函数返回值是个地址
int main(int argc, const char *argv[])
{
    V_NODE *head;
    int n=0;
    printf("Input a number:\n");
    scanf ("%d",&n);
    head=create_link (n);
    print_link(head);
    return 0;
}
V_NODE *create_link(int n)
{
    V_NODE *p=NULL;
    V_NODE *head=NULL;
    int i=0;
    p=head=malloc (sizeof (V_NODE) );         //malloc函数的返回值是个地址，要用指针来接收它
    if (p==NULL)
    {
        perror ("malloc");                    //perror是个查错函数
        exit (0);                             //回到main中，并且返回0，即程序结束
    }

    p->number=1;
    strcpy (p->name ,"a");
    p->next=NULL;                            //完成第一个节点的建立

    for (i = 0; i < n; i++) 
    {
        p->next=malloc (sizeof (V_NODE) );
        if (p->next==NULL) 
        {
            perror ("malloc");
            exit (0);
        }
        p->next->number=i+1;
        strcpy (p->next->name,"a");
        p->next->next=NULL;                 //第一个循环结束
        p=p->next;
    }
    return head;
}
void print_link (V_NODE *p)
{
    while (p!=NULL)
    {
        printf("%d\t%s\n",p->number,p->name);
        p=p->next;
    }
    return 0;
}
