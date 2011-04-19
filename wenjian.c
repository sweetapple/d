#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char *argv[])
{
    FILE *fp;
    char str[100]="hello world!";
    fp=fopen("text1","w+");
    if (fp==NULL)
    {
        perror("open:");
        exit(0);
    }
    fprintf(fp,"%s\n",str);
    fclose(fp);
    return 0;
}
