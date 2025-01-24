run: build
	./a.out

gcc: build_gcc
	./a.out
	
build:
	cc -Wall -Werror -Wextra *.c

build_gcc:
	gcc -Wall -Werror -Wextra *.c

test:
	cc *.c && ./a.out 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16
