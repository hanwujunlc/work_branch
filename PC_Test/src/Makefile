
CC = g++

IDIR = -I./flatbuffers

DEFS = -D_FILE_OFFSET_BITS=64 -D_GNU_SOURCE 
CFLAGS = -std=c++0x -O0 -g $(IDIR) $(EXTLIB_INCL) $(DEFS)

LDFLAGS = -L ./

LIBOBJECT = -lpthread

TARGET= pc_test

#SRCS := $(shell find ./src -name '*.cpp')
#SRCS := $(sort $(SRCS))
#OBJECTS += $(SRCS:%.cpp=%.o)
SRCS = $(wildcard *.cpp)
OBJECTS := $(patsubst %cpp,%o,$(SRCS))

all: $(TARGET)

%.o:%.cpp  
	$(CC) $(CFLAGS) $(LDFLAGS) -c $<

sha1.o:./sha1/sha1.cpp
	$(CC) $(CFLAGS) $(LDFLAGS) -c $<

base64.o:./base64/base64.cpp
	$(CC) $(CFLAGS) $(LDFLAGS) -c $<

$(TARGET): $(OBJECTS) sha1.o base64.o
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^ $(LIBOBJECT)

clean:
	@rm -f *.o *~ core $(TARGET)
