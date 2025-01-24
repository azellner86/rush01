run: build
	./a.out

gcc: build_gcc
	./a.out
	
build:
	cc -Wall -Werror -Wextra *.c

build_gcc:
	gcc -Wall -Werror -Wextra *.c

test:
	cc *.c && ./a.out
