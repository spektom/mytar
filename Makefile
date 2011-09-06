CC=gcc
CFLAGS+=-g

all:
	$(CC) $(CFLAGS) -o mytar tar.c

clean:
	rm -f mytar
