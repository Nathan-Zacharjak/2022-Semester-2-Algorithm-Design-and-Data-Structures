make: compile run

compile: Individual.cpp main.cpp
	g++ Individual.cpp main.cpp -o main.out -std=c++11 -O2 -Wall

run:
	./main.out