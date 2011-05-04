all:is_empty.o main.o pop.o push.o stack.o 
	gcc main.o is_empty.o pop.o push.o stack.o -shared -o libstack.so
is_empty.o:is_empty.c
	gcc is_empty.c -fPIC -c
main.o:main.c
	gcc main.c -fPIC -c
pop.o:pop.c
	gcc pop.c -fPIC -c
push.o:push.c
	gcc push.c -fPIC -c
stack.o:stack.c 
	gcc stack.c -fPIC -c
.PHONY:clean
clean:
	rm -rf *.o
	rm *.so
