make: compile run

compile: QuickSort.cpp BubbleSort.cpp main.cpp
	g++ QuickSort.cpp BubbleSort.cpp main.cpp -o main.out -std=c++11 -O2 -Wall

run:
	./main.out