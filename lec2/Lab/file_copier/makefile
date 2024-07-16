CC=gcc
OBJS=filecopier.o
TARGET=filecopier.out
FLAGS=-g -Wall

all: $(TARGET)

$(TARGET):$(OBJS)
	$(CC) -o $@ $(OBJS)

filecopier.o: filecopier.c

clean:
	rm -f *.o
	rm -f $(TARGET)
