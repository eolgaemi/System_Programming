CC=gcc
OBJS=wordCounter.o
FLAGS=-g -Wall
TARGET=wordCounter.out

all:$(TARGET)

$(TARGET):$(OBJS)
	$(CC) -o $@ $(OBJS)

wordCounter.o: wordCounter.c

clean:
	rm -f *.o
	rm -f $(TARGET)
