make: compile run

compile: MapGeneric.cpp MapTriple.cpp MapSquare.cpp MapAbsoluteValue.cpp main.cpp
	g++ MapGeneric.cpp MapTriple.cpp MapSquare.cpp MapAbsoluteValue.cpp main.cpp -o main.out -std=c++11 -O2 -Wall

run:
	./main.out