all:main.o fun1.o fun2.o fun3.o
	gcc -o all main.o fun1.o fun2.o fun3.o
main.o:main.c
	gcc -c main.c 
fun1.o:fun1.c
	gcc -c fun1.c
fun2.o:fun2.c
	gcc -c fun2.c
fun3.o:fun3.c
	gcc -c fun3.c
.PHONY:clean
clean:
	rm *.o all
