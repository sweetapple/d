#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>


//////////在代码中实现重定向（dup2函数）///////////////
int main(int argc,char *argv[])
{
    int fd;
    if(argc != 2)
    {
        fputs("usage:wrapper file\n",stderr);
        exit(1);
    }
    fd = open(argv[1],O_RDONLY);
    if(fd < 0)
    {
        perror("open");
        exit(1);
    }
    dup2(fd,STDIN_FILENO);
    close(fd);
    execl("./upper","upper",NULL);
    perror("exec ./upper");
    exit(1);
}
