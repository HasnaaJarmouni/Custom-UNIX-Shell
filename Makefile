CC=gcc
CFLAGS=-Wall -Wextra -Werror

all:
	$(CC) $(CFLAGS) src/*.c -Iinclude -o hasnaashell
clean:
	rm -f hasnaashell
