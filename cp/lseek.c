#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>


int main(int argc, const char *argv[])
{
    int fd;
    fd = open("1.txt", O_WRONLY);
    if(fd<0)
    {
        perror("open file:");
        exit(1);
    }

    lseek(fd,3,SEEK_SET);
    
    write(fd,"l",1);
    lseek(fd,2,SEEK_SET);
    write(fd,"H",1);
    close(fd);
    return 0;
}
