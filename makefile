all: strfunc.o main.o
	gcc -o strtest strfunc.o main.o
strfunc.o: strfunc.c headers.h
	gcc -c strfunc.c
main.o: main.c headers.h
	gcc -c main.c
clean:
	rm *.0
	rm *~
run: all
	./strtest
