#include <stdio.h>

int main(int argc, const char *argv[])
{
    int d=0;
    int i=0;
    unsigned int mask = (0x01<< (sizeof (int)*8-1));
    puts ("please input a number:");
    scanf ("%d",&d);
    puts ("result:");
    for (i=0;i<(sizeof(int)*8);i++)
    {

        printf("%d",( (d& mask)!=0?1:0));
        mask >>=1;
    }
    printf("\n");
    return 0;

}
