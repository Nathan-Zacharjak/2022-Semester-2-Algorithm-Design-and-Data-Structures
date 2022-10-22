make: compile run

compile: Convert.cpp main.cpp
	g++ Convert.cpp main.cpp -o main.out -std=c++11 -O2 -Wall

run:
	./main.out