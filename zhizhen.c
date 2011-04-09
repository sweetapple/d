#include <stdio.h>

int main(int argc, const char *argv[])
{
    char str[20]="This is a C world !";
    char *p=str;
    while (*p!='\0')p++;
    for (p--;p!= (str-1);p-- )
    {
        putchar (*p);
    }
    putchar ('\n');
    return 0;
}
