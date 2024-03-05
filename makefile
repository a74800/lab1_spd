CC = gcc
CFLAGS = -Wall -std=gnu99
LDFLAGS = -lm -lpthread

SRC1 = teste_tempo.c
SRC2 = exemplo_getpid.c

TARGETS = teste_tempo exemplo_getpid

all: $(TARGETS)
	@echo "Done!"
.PHONY: all

teste_tempo: $(SRC1)
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

exemplo_getpid: $(SRC2)
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

	
clean:
	/bin/rm -f $(TARGETS)
