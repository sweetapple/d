#include <stdio.h>
#define N 10
int main(int argc, const char *argv[])
{
    int array[N];
    int i=0;
    int n=0;
    while (n++<100)
    {
        printf("%5d",i);
        i++;
        if (i==N)
        {
            i=0;
        }
    }
    printf("\n");
    return 0;
}
