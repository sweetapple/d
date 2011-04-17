#include <stdio.h>
#include <string.h>
#define P ptr->
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
    P number=17;
    P score=150;
    strcpy (ptr->name,"pt");
    printf("number:%d\tscore:%d\tname:%s\n",P number,P score,ptr->name);
    printf("please input a number:\n");
    scanf ("%d",&P number);
    printf("name:\n");
    scanf ("%s",P name);
    printf("score:\n");
    scanf ("%d",&P score);
    printf("number:%d\tscore:%d\tname:%s\n",P number,P score,ptr->name);
    return 0;
}
