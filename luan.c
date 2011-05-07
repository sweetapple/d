#include <stdio.h>

int main(int argc, const char *argv[])
{
    char a[10]={0,1,2,3,4,5,9,7,8,6};
    int *p=(int *)(a+2);
    int i=*p;
    printf("%x\n",i);
    return 0;
}
