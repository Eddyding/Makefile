phonyall:prog1 prog2 prog3
.PHONY:phonyall
prog1:prog1.o
	gcc -o prog1 prog1.o
prog2:prog2.o
	gcc -o prog2 prog2.o
prog3:prog3.o
	gcc -o prog3 prog3.o
.PHONY:clean
clean:
	rm *.o prog1 prog2 prog3
