#include <stdio.h>
#include <sys/mman.h>                  //mmap的头文件
#include <sys/types.h>
#include <sys/stat.h>                 //open 的头文件
#include <fcntl.h>
#include <stdlib.h>                   //exit 的头文件
int main()
{
    int fd;
    char *p;
    int i=0;
    fd = open("1.txt",O_RDWR|O_CREAT|O_TRUNC,0644);
    if (fd < 0) 
    {
        perror("open file1 error:");
        exit (1);
    }
    lseek(fd,5,SEEK_SET);             //lseek 用来扩张文件文件 长6 个字节
    write(fd,"",1);
    p = (char *)mmap(NULL,10,PROT_READ|PROT_WRITE,MAP_SHARED,fd,0);
    if (p == MAP_FAILED) 
    {
        perror("mmap file 1.txt error:");
        exit(1);
    }

    close(fd);                       //完成映射后 关闭文件 
    for (i = 0; i < 10; i++) 
    {
        p[i] = i;
    }

    printf("shared memory init ok!\n");
    getchar();                          //初始化程序
    
    munmap(p,10);
    return 0;
}
