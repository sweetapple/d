#include <stdio.h>
#include <string.h>
int find_word (char *s,char *w);
int main(int argc, const char *argv[])
{
    char str[100]="This is a wonderful game !";
    char s[100]="wonder";
    int num = find_word (str,s);
    int find_word (char *s,char *w);
    if (num<0)
    {
        printf("No such word\n");
    }
    else
    {
        printf("%d\n",num);
        printf("press enter to test ...\n");
        getchar  ();
        printf("%s\n",str+num);
    }
    return 0;
}
int find_word (char *s,char *w)
{
    int i=0;
    while (s[i] !='\0')
    {
        if (strncmp (s+i,w,strlen (w) )==0 )
        {
            return i;
        }
        i++;
    }
    return -1;
}
