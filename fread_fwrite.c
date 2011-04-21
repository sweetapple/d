#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char *argv[])
{
    char str[1024];
    FILE *fp1;
    FILE *fp2;
    int n=0;
    fp1=fopen  ("text1","r+");
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
    n=fread (str,1,1023,fp1);
    if (n!=0) 
    {
        str[n]='\0';
        fwrite (str,1,n,fp2);
    }
    fclose (fp1);
    fclose (fp2);
    return 0;
}
