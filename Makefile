make: compile run

compile: BitFlip.cpp BitFlipProb.cpp Rearrange.cpp Individual.cpp main.cpp
	g++ BitFlip.cpp BitFlipProb.cpp Rearrange.cpp Individual.cpp main.cpp -o main.out -std=c++11 -O2 -Wall

run:
	./main.out