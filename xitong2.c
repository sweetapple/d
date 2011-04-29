#include <stdio.h>
#include<string.h>
#include<stdlib.h>
struct node
{
    int number;

    char name[20];
//在结构体中定义自己得指针；
    struct node *next;

};
typedef struct node V_NODE;
void print_link(V_NODE *p);
V_NODE *link_add(V_NODE *head);

V_NODE *create_link (int n);
V_NODE *delete_link (V_NODE *head);
int get_choice (void);
void print_list (void);
void save_link (V_NODE *p)
{   
    FILE *fp;
    fp=fopen ("text1","a+");
    if (fp==NULL) 
    {
        perror ("fp");
        exit (0);
    }
    while (p!=NULL)
    {
        fprintf (fp,"%d\t%s\n",p->number,p->name);
        p=p->next;
    }
    fclose  (fp);
}
V_NODE *load_link (void)
{
    FILE *fp;
    int num;
    char na[20];
    V_NODE *head=NULL;
    V_NODE *p=NULL;
    fp=fopen ("text1","r+");    //新
    if (fp==NULL) 
    {
        perror ("fp");
        exit (0);
    }
    if (fscanf (fp,"%d%s",&num,na)!=EOF) 
    {
        p=malloc(sizeof (V_NODE));
        if (p==NULL) 
        {
            perror ("malloc");
            exit (0);
        }
        p->number=num;
        strcpy (p->name,na);
        p->next=NULL;
        head=p;
    }
    while (fscanf (fp,"%d%s",&num,na)!=EOF)
    {
        p->next=malloc(sizeof (V_NODE));
        if (p->next==NULL) 
        {
            perror ("malloc");
            exit (0);
            }
        p->next->number=num;
        strcpy (p->next->name,na);
        p->next->next=NULL;
        p=p->next;
    }
    return head;
}
int main(int argc, const char *argv[])
{
    V_NODE *head=NULL;
    char flag=0;
    head = load_link ();
    while (!flag)
    {
        print_list();
        switch (get_choice () )
        {
            case 1  : head=link_add(head);break;
            case 2  : head=delete_link (head) ;break;
            case 3  : print_link (head);break;
            case 4  : save_link (head);break;
            case 5  : flag=1 ;break;
            default : break;
        }
    }
    return 0;
}
int get_choice (void)
{
    char choice[20];
    scanf ("%s",choice);
    return atoi(choice);
}
void print_list (void)
{
    printf("please make a choice:\n");
    printf("1 add node\n");
    printf("2 delete node\n");
    printf("3 print link\n");
    printf("4 save\n");
    printf("5 exit\n");

}
V_NODE *create_link(int n)
{
//在建立链表得时候首地址，一般都不能动，否则地址得内容会丢失了；
    V_NODE *p=NULL;
    V_NODE *head=NULL;
    int i=0;
 //malloc是给程序员设计得堆空间，这个空间不是因为函数结束而结束，而是进程结束或者
 //free掉这个空间。才能释放掉这个空间。
    p = head = malloc (sizeof(V_NODE));
    if (p==NULL) 
    {
  //perror();一般是打印错误信息得函数，它会打印出哪得信息出现错误，但是你给它一个参。
        perror("malloc");
        exit(0);

    }

    p->number =1;
    strcpy( p->name,"sao");
    p->next =NULL;
    for (i = 0; i < n; i++) 
    {
        p->next = malloc (sizeof(V_NODE));
        if (p->next == NULL) 
        {
            perror ("malloc");
            exit(0);
        }
        p->next->number = i+1;
        strcpy( p->next->name,"ASS");
        p->next->next=NULL;
        p = p->next;
    }
    return head;
}

////打印得函数
////
void print_link(V_NODE *p)
{
    while(p!=NULL)
    {
         printf("%d\t%s\n",p->number,p->name);
         p = p->next;
    
         printf("\n");
    }
}
V_NODE *link_add(V_NODE *head)
{
    V_NODE *p = NULL;
    V_NODE *ptr =head;
    p = malloc(sizeof(V_NODE));
    if (p==NULL) 
    {
        perror("malloc");
        exit(0);
    }
    
    printf("input a number:");
    scanf("%d",&p->number);
    printf("input a name:");
    scanf("%s",p->name);
    p->next = NULL;
    if (ptr==NULL) 
    {
        return p;
    }
    if (p->number<ptr->number) 
    {
        p->next=ptr;
        head=p;
        return head;
    }
    while((ptr->next!=NULL)&&(p->number>ptr->next->number))
    {
    ptr = ptr->next;
     
    } 
    p->next=ptr->next;
    ptr->next=p;
    
    return head;

}
////////////////下面是删除模块////////////////
V_NODE *delete_link (V_NODE *head)
{
    int num=0;
    V_NODE *p=head;
    V_NODE *ptr=NULL;
    if (head==NULL)                   //
    {                                 //判断原链表是否为空 
        printf("empty link!\n");      //
        return NULL;
    }
    printf("Please input number of node to delete:\n");
    scanf ("%d",&num);
    if (num==head->number) 
    {
        head=head->next;
        free (p);                     //free释放空间
        return head;
    }
    while ( (p->next!=NULL)&& (p->next->number!=num) )
    {
        p=p->next;
    }
    if (p->next==NULL)                //判断是否找到了最后的元素 
    {
        printf("No number match!\n");
    }
    else
    {
        ptr=p->next;
        p->next=p->next->next;
        free (ptr);
    }
    return head;
}
