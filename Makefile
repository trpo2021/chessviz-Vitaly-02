CC=g++
CFLAGS=-c -Wall -Werror
LDFLAGS=
SOURCES=start.cpp 
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=start

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@
