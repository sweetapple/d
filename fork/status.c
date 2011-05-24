#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(int argc, const char *argv[])
{
    int status;
    pid_t pid = fork();
    if (pid > 0) //parent
    {
        kill(pid,SIGINT);        
        wait(&status);                               //宏1
        if (WIFEXITED(status)) 
        {
            printf("the status is %d\n",WEXITSTATUS(status));//宏2
        }
        else if(WIFSIGNALED(status))                         //宏3
                printf("the return status is %d\n",WTERMSIG(status));//宏4
    }
        //chaild//
    if (pid == 0)
            sleep(5);
    return 0;
}
