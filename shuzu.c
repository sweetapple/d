#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10
#define M 10
int main(int argc, const char *argv[])
{
    int array[N][M];
    int i=0;
    int j=0;
//    for (j = 0; j < N; j++) 
//    {
//        for (i = 0; i < M; i++) 
//        {
//            array[j][i]=j*M+i+1;
//        }
//    }
//    for
//    for (j = 0; j < N; j++) 
//    {
//        for (i = 0; i < M; i++) 
//        {
//            printf("%5d",array[j][i]);
//        }
//        printf("\n");
//    }
    srand (time (NULL) );
    for (i = 0; i < M*N; i++) 
    {
        array[0][i]=rand()%(M*N);
    }
    for (j=0;j<N;j++)
    {
        for (i=0;i<M;i++)
        {
            printf("%5d",array[j][i]);
        }
    }
    printf("\n");
    return 0;
}
