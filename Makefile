all: a0

a0: a0.c
	gcc a0.c -o a0

clean:
	rm -f a0
