#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char *argv[])
{
    char str[100];
    int number=0;
    int base=0;
    char *p;
    printf("input the number:\n");
    scanf ("%s",str);
    printf("input the base:\n");
    scanf ("%d",&base);

    number=strtol(str,&p,base);                                        //8 是8进制
    printf("the decimal number:%d\n",number);
    return 0;
}
