#include <stdio.h>

int main(int argc, const char *argv[])
{
    char str[20]="This is a C world !";
    char *p=str;
    char c_str[20];
    printf("%s\n",str);
    getchar();
    char *p_c=c_str;
    for (p=str;*p!='\0';p++)
    {
        if (*p!=' ')
        {
            *p_c=*p;
            p_c++;
        }
    }
    *p_c='\0';
    printf("%s\n",c_str);
    return 0;
}
