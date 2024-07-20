CC=gcc
OBJS=fileTCmacro.o
CFLAGS=-g -Wall
TARGET=fileTCmacro.out

all = $(TARGET)

$(TARGET): $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS): fileTCmacro.c

clean:
	rm -f *.o
	rm -f $(TARGET)
