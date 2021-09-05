CC = gcc
CFLAGS = -Isrc/include -o
CFILES = src/*.c

.PHONY: all

all:
	$(CC) $(CFLAGS) repoman $(CFILES)
	
install:
	@echo "Installing repoman..."
	@cp ./repoman /usr/bin/repoman
	@echo "Done!"

clean:
	rm repoman
