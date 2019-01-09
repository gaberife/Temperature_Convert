OBJ=tempConvert.o tempTable.o
DEPS=tempConvert.h
CC=gcc
CFLAGS=-I.
LIBS=

%.o: %.c $(DEPS)
        $(CC) -c -o $@ $< $(CFLAGS)

temp: $(OBJ)
        $(CC) -o $@ $^ $(CFLAGS) $(LIBS)

clean:
        rm -f *.o *~

