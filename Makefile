make: compile run

compile: ReduceGeneric.cpp ReduceGCD.cpp ReduceMinimum.cpp main.cpp
	g++ ReduceGeneric.cpp ReduceGCD.cpp ReduceMinimum.cpp main.cpp -o main.out -std=c++11 -O2 -Wall

run:
	./main.out