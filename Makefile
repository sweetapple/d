CFLAG = -Wall -c -fPIC             #编译时 执行的指令
LDFLAG =-shared
target = libstack.so
src =$(wildcard *.c)         #src=a.c b.c c.c  wildcard  查找当先目录下的。c文件
CC = gcc
obj=$(patsubst %.c,%.o,$(src))#把 。c替换成。o 所以 obj=a.o b.o c.o

all:$(obj) 
	gcc $(obj) -shared -o libstack.so
%.o:%.c
	gcc $(CFLAG) -o $@ $<      #$@代表目标  $<依赖当中出现的第一个文件 所以 $@ $< 相当于a.o a.c
.PHONY:clean
clean:
	rm -rf *.o
	rm *.so
