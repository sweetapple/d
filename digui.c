#include <stdio.h>
void hanoi (char a, char b, char c, int n);
static int count;
int main(int argc, const char *argv[])
{
    count=0;
    int n=0;
    printf("please input the number:\n");
    scanf ("%d",&n);
    hanoi ('A','B','C',n);
    printf("%d\n",count);
    return 0;
}
void hanoi (char a, char b, char c, int n)
{
    if (n==1) 
    {
    count++;
        printf("%c---->%c %d\n",a,c,count);
        return ;
    }
    hanoi (a,c,b,n-1);
    count++;
    printf("%c---->%c %d\n",a,c,count);
    hanoi (b, a, c,n-1);
}
