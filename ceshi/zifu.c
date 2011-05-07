#include <stdio.h>
#define N 1000
int chaz(char *p,char *q );
int main(int argc, const char *argv[])
{
    char abc[N]=" 1 2 3 4 5 6 7 8 9 0 a b c d e f g h i j k l m n o p q r s t u v w x y z this is a very good program !";
    char a[N]="very";
    printf("%s\n",abc);
    chaz(abc,a);
    printf("%s\n",a);
    return 0;
}
int chaz(char *p,char *q)
{
    int i=0;
    int j=0;
    for (i = 0; i < N; i++) 
    {
        if (p[i]==p[j]) 
        {
            
        }
    }
}
