#include <stdio.h>
#include <string.h>
#define P ptr->                                                        //这里尽量不用宏定义
struct node
{
    int number;
    char name[20];
    char score;
};
typedef struct node V_NODE;
int main(int argc, const char *argv[])
{
    V_NODE stu;
    V_NODE *ptr=NULL;
    ptr=&stu;
    P number=17;
    P score='a';
    strcpy (ptr->name,"pt");
    printf("number:%d\tscore:%d\tname:%s\n",P number,P score,ptr->name);//score后面 是%d 不是%c 所以输出的数据是 97  不是 a
    printf("please input a number:\n");
    scanf ("%d",&P number);
    printf("name:\n");
    scanf ("%s",P name);
    getchar ();
    printf("score:\n");
    scanf ("%c",&P score);
    printf("number:%d\tscore:%c\tname:%s\t\n",P number,P score,ptr->name);
    return 0;
}
