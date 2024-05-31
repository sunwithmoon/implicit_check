CC=gcc
CFLAGS=-w
SOURCES=$(wildcard *.c)
OBJECTS=$(SOURCES:.c=.o)
BINS=$(SOURCES:.c=)

all: $(BINS)

%: %.c Makefile
	$(CC) $(CFLAGS) -o $@ $<

clean:
	rm -f $(BINS) $(OBJECTS)

.PHONY: all clean