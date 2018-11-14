# myclass program Makefile

GCC = g++
CFLAGS = -g -Wall
OBJS = main.o myclass.o

example1: $(OBJS)
	$(GCC) $(OBJS) -o example1

main.o: main.cpp myclass.h
	$(GCC) $(CFLAGS) -c main.cpp

myclass.o: myclass.cpp myclass.h
	$(GCC) $(CFLAGS) -c myclass.cpp

clean:
	rm $(OBJS) example1
