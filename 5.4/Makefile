all: prog1 prog2 prog3
.PHONY:all #不会生成all这个伪目标,但会有prog1,prog2,prog3
prog1: prog1.o utils.o
	cc -o prog1 prog1.o utils.o
prog2: prog2.o
	cc -o prog2 prog2.o
prog3: prog3.o sort.o  utils.o
	cc -o prog3 prog3.o sort.o  utils.o 
.PHONY:clean
clean:
	rm prog1 prog2 prog3 *.o
