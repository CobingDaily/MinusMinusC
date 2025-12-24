CC = gcc
CFLAGS = -Wall -g

main: main.c include/*.h
	$(CC) $(CFLAGS) -o main main.c

clean:
	rm -f main
