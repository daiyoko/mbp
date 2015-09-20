CC=g++
CFLAGS=-I. -I/usr/local/Cellar/boost/1.58.0/include
LDFLAGS=-L/usr/local/Cellar/boost/1.58.0/lib
LIBS=-lboost_locale-mt -lboost_filesystem-mt -lboost_system-mt
SOURCE=asyncserver.cpp
OBJECTS=$(SOURCE:.cpp=.o)
EXECUTABLE=$(basename $(SOURCE))

all: $(SOURCE) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(CFLAGS) $(LDFLAGS) $(OBJECTS) -o $@ $(LIBS)

clean:
	rm -f *.o $(EXECUTABLE)
