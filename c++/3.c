#include <stdio.h>

int main(int argc, const char *argv[])
{
    int x = 300;
    int y = 1;
    int *p;
    p = &x;
    char *q;
    q = &x;
    char *m;
    m =&y;
    printf("%d,%d\n",x,y);
    printf("*p =%d\n",*p);
    printf("p = %d\n",p);
    printf("*q =%d\n",*q);
    printf("q =%d\n",q);
    printf("*m =%d\n",*m);
    return 0;
}
