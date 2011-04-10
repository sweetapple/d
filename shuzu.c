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
    int temp=0;
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
        printf("\n");
    }
    printf("\n");
    for (i=0;i<(M*N-1);i++)
    {
        for (j=i+1;j<M*N;j++)
        {
            if (array[0][i]>array[0][j])
            {
               temp=array[0][i];
               array[0][i]=array[0][j];
               array[0][j]=temp;
            }
        }
    }
    for (i = 0; i < M; i++) 
    {
        for (j=0;j<N;j++)
        {
            printf("%5d",array[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
