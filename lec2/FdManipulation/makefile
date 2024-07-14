CC = gcc
FLAGS=-o -Wall
OBJS=Fdmanipulation.o
TARGET=Fdmanipulation.out

all=TARGET

$(TARGET): $(OBJS)
	$(CC) -o $@ $(OBJS)

Fdmanipulation.o: Fdmanipulation.c

clean:
	rm -f *.o
	rm -f $(TARGET)
