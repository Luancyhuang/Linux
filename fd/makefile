.PHONY:all
all:test myfile

test:test.cc
	g++ -o $@ $^ -std=c++11 -g

myfile:myfile.c
	gcc -o $@ $^ -std=c99 -g

.PHONY:clean
clean:
	rm -f myfile test

