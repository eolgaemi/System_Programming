CC=gcc
CFLAGS=-g -Wall
OBJS=fileOpenClose.o
TARGET=fileOpenClose.out

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) -o $@ $(OBJS) 

fileOpenClose.o: fileOpenClose.c

clean:
	rm -f *.o
	rm -f $(TARGET)CC=gcc
