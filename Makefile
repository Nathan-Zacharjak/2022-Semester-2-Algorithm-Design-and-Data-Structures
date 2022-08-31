make: compile run

compile: FilterGeneric.cpp FilterOdd.cpp FilterNonPositive.cpp FilterForTwoDigitPositive.cpp main.cpp
	g++ FilterGeneric.cpp FilterOdd.cpp FilterNonPositive.cpp FilterForTwoDigitPositive.cpp main.cpp -o main.out -std=c++11 -O2 -Wall

run:
	./main.out