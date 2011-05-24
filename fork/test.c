#include <stdio.h>

int main()
{
    int i;
    int n = 0;
    for (i = 0; i  < 10 ; i++)
    {
        n = n + i;
        printf("n = %d\n",n);
        if (n == 13) 
        {
            printf("this  time n = 13\n");
        }
    }
    return 0
}
