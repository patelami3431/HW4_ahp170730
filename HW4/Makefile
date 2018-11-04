EXEC1 := myprog1
SRC1 := myprog1.c
CC := gcc
CFLAGS := -O3

$(EXEC1): myprog1.o
	$(CC) -o $@ $^
.PHONY: clean
clean: 
	rm -f myprog1.o
	rm -f myprog1
