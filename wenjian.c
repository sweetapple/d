#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char *argv[])
{
    FILE *fp;
    char str[100]="hello world!";
    char str_1[100];
    int number=78;
    int r_number=79;
    fp=fopen("text1","w+");
    if (fp==NULL)
    {
        perror("open:");
        exit(0);
    }
    fprintf (fp,"%d %d\n",number ,number+1);
    fprintf(fp,"%s\n",str);
    fscanf (fp,"%d %d",&number,&r_number);
    printf("number=%d r_number=%d\n",number,r_number);
    fclose(fp);
    return 0;
}
