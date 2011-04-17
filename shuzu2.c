#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 100
void print_array(int *p)
{
    int i=0;
    int j=0;
    for (i = 0; i < N; i++) 
    {
        if (p[i]>0)
        {
            printf("%5d",p[i]);
        }
    }
    printf("\n");
}
void init_array(int *p)
{
    int i=0;
    srand (time (NULL) );
    for (i = 0; i < N; i++) 
    {
        p[i]= (rand ()%10 );
    }
}
void sort_array(int *p)
{
    int i=0;
    int j=0;
    for (i = 0; i < N-1; i++) 
    {
        if (p[i]>0)
        {
            for (j=j+1;j<N;j++)
            {
                if (p[j]==p[i])
                {
                    p[j]=-1;
                }
            }
        }
    }
}
int main (void)
{
    int array(N);
    init_array(array);
    printf("original:\n");
    print_array(array);
    sort_array(array);
    printf("sort:\n");
    print_array(array);
    return 0;
}
