# Setup a variable to reference the desired compiler
CC = gcc

# Setup a variable to hold desired compiler flags
CFLAGS = -Wall -Wextra -Wpointer-arith -Wstrict-prototypes -std=c99 -g
LDFLAGS = -lm 

# Declaring the build, test and clean rules as phony means that no artifact
#   is created by these rules with a cooresponding name.  Therefore, the
#   rule should run when executed.
.PHONY: build test clean

# The build rule depends upon the myprog artifact existing.  If it does not, make
#   will look for a rule to create it.
build: myprog


myprog: main.o 
	$(CC) $(CFLAGS) $^ -o $@  $(LDFLAGS)

myprog-v2:
	gcc -E main.c -o myprog.i
	gcc -S myprog.i -o myprog.s
	as myprog.s -o myprog.o
	ld /usr/lib/x86_64-linux-gnu/crti.o /usr/lib/x86_64-linux-gnu/crtn.o /usr/lib/x86_64-linux-gnu/crt1.o /usr/lib/x86_64-linux-gnu/libc.so /usr/lib/x86_64-linux-gnu/libm.so myprog.o -dynamic-linker /lib64/ld-linux-x86-64.so.2 -o myprog-v2


test:
	./myprog

clean:
	rm -f *.o *.d *.i *.s a.out myprog myprog-v2 mytests main
