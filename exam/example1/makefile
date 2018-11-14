# furniture makefile

GCC = g++
CFLAGS = -g -Wall
OBJS = main.o furniture.o table.o bed.o

furniture: $(OBJS)
	$(GCC) $(OBJS) -o furniture

main.o: main.cpp furniture.h table.h bed.h
	$(GCC) $(CFLAGS) -c main.cpp

furniture.o: furniture.cpp furniture.h
	$(GCC) $(CFLAGS) -c furniture.cpp

table.o: table.cpp table.h
	$(GCC) $(CFLAGS) -c table.cpp

bed.o: bed.cpp bed.h
	$(GCC) $(CFLAGS) -c bed.cpp

clean:
	rm $(OBJS) furniture
