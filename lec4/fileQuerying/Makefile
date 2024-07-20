CC=gcc
OBJS=querying_finfo.o
TARGET=querying_finfo.out
FLAGS= -g -Wall

all = $(TARGET)

$(TARGET): $(OBJS)
	$(CC) -o $@ $(OBJS)

querying_finfo.o: querying_finfo.c

clean:
	rm -f *.o
	rm -f $(TARGET)
