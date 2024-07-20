CC=gcc
OBJS=fileCheckPerm.o
CFLAGS=-g -Wall
TARGET=fileCheckPerm.out

all=$(TARGET)

$(TARGET): $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS): fileCheckPerm.c

clean:
	rm -f *.o
	rm -f $(TARGET)
