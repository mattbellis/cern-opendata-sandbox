CC=g++

CFLAGS=-c -g -Wall `root-config --cflags`

LDFLAGS=`root-config --glibs`

SOURCES=hello_world_ROOT.cc 

OBJECTS=$(SOURCES:.cc=.o)
	EXECUTABLE=hello_world_ROOT

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cc.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f ./*~ ./*.o ./hello_world_ROOT
