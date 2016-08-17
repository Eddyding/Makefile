main: main.o
	gcc main.c -o main
	ob=$(subst e,E,sweat will become to sweet)
	echo $(ob)
.PHONY:clean
clean:
	rm *.o main 
