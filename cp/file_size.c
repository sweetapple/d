#include<stdio.h>
#include<stdlib.h>
#include<sys/mman.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/stat.h>
#include<string.h>

int main(int argc, const char *argv[])
{
    int in;
    struct stat statbuf;
    in = open(argv[1],O_RDONLY);
/*    if( in < 0)
    {
        perror("error");
        exit (1);
    }*/
    if(fstat(in,&statbuf) == -1)
    {
        perror("error 2");
        exit (1);
    }
    printf("size :%d\n",(int )statbuf.st_size);
    return 0;
}
