W = -g -Wall

output: myBank.o main.o
	gcc $(W) main.o myBank.o -o output

main.o: main.c
	gcc $(W) -c main.c
myBank.o: myBank.c myBank.h
	gcc $(W) -c myBank.c

clean:
	rm *.o output
