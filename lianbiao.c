#include <stdio.h>
#include <string.h>

struct node
{
    int number;
    char name[20];
    int score;
};
typedef struct node V_NODE;
int main(int argc, const char *argv[])
{
    V_NODE stu;
    V_NODE *ptr=NULL;
    ptr=&stu;
    ptr->number=2;
    ptr->score=150;
    strcpy (ptr->name,"pt");
    printf("number:%d\tscore:%d\tname:%s\n",ptr->number,ptr->score,ptr->name);
    return 0;
}
