#include <stdlib.h>
#include <sys/mman.h>
#include <fcntl.h>

int main(void)
{
    char *p;
    int i;
    int fd = open("hello",O_RDWR);
    if(fd < 0)
    {
        perror("open hello");
        exit (1);
    }
    p = mmap(NULL,8,PROT_WRITE,MAP_SHARED,fd,0);
    if (p == MAP_FAILED) 
    {
        perror("mmap");
        exit(1);
    }
    close(fd);
//    p[0] = 0x3031323334;
    p[0] = 0x30;
    for (i = 1; i < 8; i++) 
    {
        p[i] += 0x01;
    }
    munmap(p,8);
    return 0;
}
