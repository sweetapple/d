#include <unistd.h>
#include <stdlib.h>

int main()
{
    execlp("ps","ps","-o","pid,ppid,pgrp,session,tpgid,comm",NULL);
    perror("exec ps");
    exit(1);
    return 0;
}
