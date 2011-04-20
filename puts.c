#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char *argv[])
{
    FILE *fp;
    char s[100]="hello world !\nThis is a c world!";
    char d[100];
    int i=0;
//    fp=fopen ("text1","r+");                         //覆盖原来的东西，相当于替换
    fp=fopen ("text1","a+");                           //a+ 累加
    if (fp==NULL) 
    {
        perror ("open");
        exit (0);
    }
    while (s[i]!='\0')
    {
        putc(s[i++],fp);                            //可输入的东西不受限制，比如\0,\n等等
    }
    fclose (fp);
    return 0;
}
