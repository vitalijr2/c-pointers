CC=g++

CFLAGS=-c -Wall
LDFLAGS=

SRCDIR=src
SRCEXT=cpp
OBJEXT=o

SOURCES=$(shell find $(SRCDIR) -type f -name *.$(SRCEXT))
OBJECTS=$(SOURCES:.$(SRCEXT)=.$(OBJEXT))
EXECUTABLE=c-pointers

all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(OBJECTS) $(EXECUTABLE)
