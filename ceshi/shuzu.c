#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 30
int init_array(int *p);
int sort(int *p);
int print_array(int *p);
int main(int argc, const char *argv[])
{
    int array[N];
    init_array(array);
    print_array(array);
    printf("\n");
    sort(array);
    print_array(array);
    printf("\n");
    return 0;
}
int init_array(int *p)
{
    int i=0;
    srand (time (NULL) );
    for(i=0;i<N;i++) 
    {
        p[i]=(rand()%500);
    }
}
int sort(int *p)
{
    int i=0;
    int j=0;
    int tmp=0;
    for (i = 0; i < N; i++) 
    {
        for (j = i+1; j < N; j++) 
        {
            if(p[i]>p[j])
            {
                tmp=p[i];
                p[i]=p[j];
                p[j]=tmp;
            }
        }
    }
}
int print_array(int *p)
{
    int i=0;
    int j=0;
    for (i = 0; i < N; i++) 
    {
        j++;
        if ((j-1)%10==0) 
        {
            printf("\n");
        }
        printf("%d  ",p[i]);
    }
    return 0;
}
