all:
	g++ -pthread -Wall -Werror main.cpp
run: main.cpp
	./a.out
