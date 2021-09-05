CC = gcc
CFLAGS = -o
CFILES = src/*.c

.PHONY: all

all:
	$(CC) $(CFLAGS) repoman $(CFILES)

clean:
	rm repoman
