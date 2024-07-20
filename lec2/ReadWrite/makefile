CC=gcc
CFLAGS=-g -Wall
OBJS=fileReadWrite.o
TARGET=fileReadWrite.out

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) -o $@ $(OBJS) 

fileOpenClose.o: fileReadWrite.c

clean:
	rm -f *.o
	rm -f $(TARGET)
