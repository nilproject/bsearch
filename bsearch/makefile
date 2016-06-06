CC=gcc
CFLAGS=-c -O2 -std=c99 -Wall
SOURCES=*.c
OBJECTS=$(SOURCES:.c=.o)
OUTPUT=bsearch.a

all: $(OUTPUT)
	
$(OUTPUT): $(OBJECTS)
	$(CC) $(OBJECTS) -o $@

$(OBJECTS): $(SOURCES)
	$(CC) $(CFLAGS) $(SOURCES)

clean:
	rm $(OBJECTS) 
	rm $(OUTPUT)

