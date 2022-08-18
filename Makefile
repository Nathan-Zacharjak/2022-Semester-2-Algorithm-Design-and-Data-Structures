make: compile run

compile: main.cpp
	g++ main.cpp -o main.out -std=c++11 -O2 -Wall

run:
	./main.out