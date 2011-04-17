#include <stdio.h>
#include <string.h>

struct node
{
    int number;
    char name[20];
    int score;
};
int main(int argc, const char *argv[])
{
    struct node stu;
    stu.number=2;
    stu.score=150;
    strcpy (stu.name,"pt");
    printf("number:%d\tscore:%d\tname:%s\n",stu.number,stu.score,stu.name);
    return 0;
}
