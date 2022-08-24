make: compile run

compile: Truckloads.cpp Reverse.cpp main.cpp
	g++ Truckloads.cpp Reverse.cpp main.cpp -o main.out -std=c++11 -O2 -Wall

run:
	./main.out