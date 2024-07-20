CC=gcc
OBJS=fileTypeCheck.o
CFLAGS=-g -Wall
TARGET=fileTypeCheck.out

all=$(TARGET)

$(TARGET): $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS): fileTypeCheck.c

clean:
	rm -f *.o
	rm -f $(TARGET)
