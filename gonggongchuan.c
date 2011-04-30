#include <stdio.h>
#include <string.h>
void cmp(char *a,char *b);
int main(int argc, const char *argv[])
{
    char str1[1024]="abcdefabc";
    char str2[1024]="abadef";
    char midl[1024];
    if(strlen(str1)<strlen(str2))
    {
        strcpy(midl,str1);
        strcpy(str1,str2);
        strcpy(str2,midl);
    }
    cmp(str1,str2);
    return 0;
}
void cmp(char *a,char *b)
{
    int i=0;
    int j=0;
    int k=0;
    int o=0;
    int x=0;
    int count=0;
    int m[50];
    int tmp=0;
    while(*b!='\0')
    {
        for(j=0;j<1024;j++)
        {
            if(*a!='\0')
            {
            for(i=0;i<1024;i++)
            {
                if(a[i]==b[j])
                {
                    count++;
                    if(count<2)
                    {
                    k=i;
                    }
                    j++;

                }
                    else
                    {
                    count=0;
                    o=i;
                    j=0;
                    x=o-i;
                    }
                
            }
            }
        }
    }
}
