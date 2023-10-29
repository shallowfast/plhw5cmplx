all: warn compile share copylib link

warn:
	echo "***\n*** This makefile only works with elevated permissions! ***\n***"

compile:
	gcc -Wall -Werror -Wextra -fpic -c uper.c low.c
	
share:
	gcc -shared -o libconvert.so low.o uper.o
	
copylib: share
	cp libconvert.so /usr/lib/

link: compile copylib share
	gcc main.c -l convert -o main

clean:
	rm -f main
	rm -f *.o
	rm -f *.so
	rm -f *.gch
	rm -f /usr/lib/libconvert.so
