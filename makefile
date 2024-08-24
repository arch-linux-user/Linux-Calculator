CC = g++
CFLAGS = -Wall -g
main: main.cpp
	$(CC) $(CFLAGS) -o calc main.cpp


clean:
	rm -f calc
