#include <stdio.h>
#include <string.h>
void str_test ();
int main(int argc, const char *argv[])
{
    str_test();
    return 0;
}
void str_test ()
{
    char str[100]="This is only a Game !";
    char *p=str;
    p=strtok(p," ");                                        //新函数
    while (p!=NULL)
    {
        printf("%s\n",p);
        p=strtok (NULL," ");
    }
}

