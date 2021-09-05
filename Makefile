CC = gcc

.PHONY: all

all:
	$(CC) src/repoman.o -o repoman

clean:
	rm repoman
