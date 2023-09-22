CC = gcc
LDFLAGS = -lncurses

scanlines: scanlines.o
scanlines.o: scanlines.c

clean:
	rm *.o


