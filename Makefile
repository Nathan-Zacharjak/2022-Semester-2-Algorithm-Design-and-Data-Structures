make: compile run

compile: RecursiveBinarySearch.cpp QuickSort.cpp BubbleSort.cpp main.cpp
	g++ RecursiveBinarySearch.cpp QuickSort.cpp BubbleSort.cpp main.cpp -o main.out -std=c++11 -O2 -Wall

run:
	./main.out