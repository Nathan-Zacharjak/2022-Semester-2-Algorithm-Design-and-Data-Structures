make: compile run

compile: Node.cpp LinkedList.cpp main.cpp
	g++ Node.cpp LinkedList.cpp main.cpp -o main.out -std=c++11 -O2 -Wall

run:
	./main.out