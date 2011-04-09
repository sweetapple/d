#include <stdio.h>

int main(int argc, const char *argv[])
{
    char str[20]="This is a C world !";
    char *p=str;
    for (p=str;*p!='\0';p++ )  
    {
        putchar  (*p);
    }
    putchar ('\n');
    printf("\n");
    return 0;
}
