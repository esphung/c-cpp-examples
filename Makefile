# author: 	eric phung
# created 	2017.04.07
# purpose: 	makefile basic example format

# 3 COMMANDS TO BUILD AND EXECUTE PROGRAM
# make clean
# make all
# make run

CFLAGS=-Wall -g

run: main.o
	g++ main.o
	./a.out
all: main.cpp
	g++ -c main.cpp
clean:
	rm -rf *.o
	rm -rf *.out
