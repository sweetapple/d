#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char *argv[])
{
    FILE *fp;
    char str[100]="hello world!";
    char str_1[100];
    int number=78;
    int r_number=0;
    fp=fopen("text1","w+");
    if (fp==NULL)
    {
        perror("open:");
        exit(0);
    }
    fprintf (fp,"%d %d\n",number ,number+1);
//    fprintf(fp,"%s\n",str);
//    fscanf (fp,"%s",str_1);
//    printf("str_1:%s",str_1);
    fclose(fp);
    return 0;
}
