#include <stdio.h>
#define N 10
#define M 10
int main(int argc, const char *argv[])
{
    int array[N][M];
    int i=0;
    int j=0;
    for (j = 0; j < N; j++) 
    {
        for (i = 0; i < M; i++) 
        {
            array[j][i]=j*M+i+1;
        }
    }
    for (j = 0; j < N; j++) 
    {
        for (i = 0; i < M; i++) 
        {
            printf("%5d",array[j][i]);
        }
        printf("\n");
    }
    return 0;
}
