#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char *argv[])
{
    char str[1024];
    FILE *fp1;
    FILE *fp2;
    int i=0;
    int n=0;
    fp1=fopen  ("text3","r+");
    if (fp1==NULL) 
    {
        perror ("fp1");
        exit (0);
    }
    fp2=fopen  ("text2","r+");
    if (fp2==NULL) 
    {
        perror ("fp2");
        exit (0);
    }
        while(!feof (fp1))
        {
        printf("%d",i);
        printf("%d\n",n);
        n+=fread (&str[i],1,4,fp1);
        i+=4;
        }
    fwrite (&str[0],1,n,fp2);
    printf("i=%d,n=%d\n",i,n);
    fclose (fp1);
    fclose (fp2);
    return 0;
}
