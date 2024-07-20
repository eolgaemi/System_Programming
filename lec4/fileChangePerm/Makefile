CC=gcc
OBJS=fileChangePerm.o
CFLAGS=-g -Wall
TARGET=fileChangePerm.out

all=$(TARGET)

$(TARGET): $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS): fileChangePerm.c

clean:
	rm -f *.o
	rm -f $(TARGET)
