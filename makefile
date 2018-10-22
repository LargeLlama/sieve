all: sieve.o main.o
	@gcc -o sieve.out main.o sieve.o -lm

sieve.o: sieve.h sieve.c 
	@gcc -c sieve.c

main.o: main.c sieve.h
	@gcc -c main.c 

run:
	@./sieve.out

clean:
	@rm *.o*
