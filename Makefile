# A4: AI-assisted instructor example. Recipe lines start with a real TAB.
CC = gcc
CFLAGS = -std=c11 -Wall -Wextra -g
.PHONY: all test clean
all: values
values: main.o values.o
	$(CC) $(CFLAGS) main.o values.o -o values
main.o: main.c values.h
	$(CC) $(CFLAGS) -c main.c
values.o: values.c values.h
	$(CC) $(CFLAGS) -c values.c
tests: tests.c values.c values.h
	$(CC) $(CFLAGS) tests.c values.c -o tests
test: tests
	./tests
clean:
	rm -f values tests *.o
