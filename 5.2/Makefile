all: main.o kbd.o command.o display.o insert.o search.o files.o \
util.o
	gcc -o all main.o kbd.o command.o display.o insert.o search.o files.o \
util.o
main.o: main.c defs.h
	gcc -c main.c
kbd.o: kbd.c defs.h command.h
	gcc -c kbd.c
command.o: command.h defs.h command.c
	gcc -c command.c
display.o: display.c defs.h buffer.h
	gcc -c display.c
insert.o: insert.c defs.h buffer.h
	gcc -c insert.c
search.o: search.c defs.h buffer.h
	gcc -c search.c
files.o : files.c defs.h buffer.h command.h
	gcc -c files.c
util.o : util.c defs.h
	gcc -c util.c

clean:
	touch \#a.txt 
	rm all main.o kbd.o command.o display.o insert.o search.o files.o \
util.o
