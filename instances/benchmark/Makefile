# Change the following to match your compiler and options
CC=gcc
CFLAGS=-O

all: dfmax results.out

dfmax:
	$(CC) $(CFLAGS) -o dfmax dfmax.c

results.out: dfmax
	./dfmax r100.5.b >results.out
	./dfmax r200.5.b >>results.out
	./dfmax r300.5.b >>results.out
	./dfmax r400.5.b >>results.out
	./dfmax r500.5.b >>results.out
