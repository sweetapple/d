#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char *argv[])
{
    FILE *fp;
    char s[100]="hello world !";
    char d[100];
    fp=fopen ("text1","w+");
    if (fp==NULL) 
    {
        perror ("open");
        exit (0);
    }
    fputs (s,fp);                           //文件写函数
    rewind (fp);
    fgets (d,99,fp);                              //文件读函数          
    printf("%s\n",d);
    return 0;
}
