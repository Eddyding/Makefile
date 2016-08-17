#include<sys/types.h>
#include<unistd.h>
#include<stdio.h>

int 
main(int argc,char **argv)
{
 pid_t gid = getpgrp();
  printf("进程id 是：%d 进程组ID是 %d\n",getpid(),gid);
  return 0; 
}
