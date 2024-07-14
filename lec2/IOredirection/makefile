CC=gcc
CFLAGS=-g -Wall
OBJS=IOredirection.o
TARGET=IOredirection.out

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) -o $@ $(OBJS)

IOredirection.o:IOredirection.c

clean:
	rm -f *.o
	rm -f $(TARGET)
