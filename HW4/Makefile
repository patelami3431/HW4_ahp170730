EXEC1 := myprog1
SRC1 := myprog1.c
EXEC2 := myprog2
SRC2 := myprog2.c
CC := gcc
CFLAGS := -O3

$(EXEC1): myprog1.o
	$(CC) -o $@ $^
$(EXEC2): myprog2.o
	$(CC) -o $@ $^
.PHONY: clean
clean: 
	rm -f myprog1.o
	rm -f myprog1
	rm -f myprog2.o
	rm -f myprog2
