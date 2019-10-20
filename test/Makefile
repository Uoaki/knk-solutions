CC = gcc
CFLAGS = -g -Wall
OBJS = foo.o bar.o
TARGET = foo.out

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

foo.o: foo.c
bar.o: bar.c
