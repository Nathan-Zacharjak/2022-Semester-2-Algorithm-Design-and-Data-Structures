make: compile run

compile: Reverse.cpp main.cpp
	g++ Reverse.cpp main.cpp -o main.out -std=c++11 -O2 -Wall

run:
	./main.out