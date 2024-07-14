CC=gcc
CFLAGS=-g -Wall
OBJS=MovingOffset.o
TARGET=MovingOffset.out

$(TARGET):$(OBJS)
	$(CC) -o $@ $(OBJS)

MovingOffset.o: MovingOffset.c

clean:
	rm -f *.o
	rm -f $(TARGET)
