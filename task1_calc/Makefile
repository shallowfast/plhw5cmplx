all: compile create link

compile:
	gcc -Wall -Werror -Wextra -c calc.c

create: compile
	ar -rcs libcalc.a calc.o

link: compile create
	gcc main.c -L . -l calc -o main -l m
	
clean:
	rm -f main
	rm -f *.o
	rm -f *.a