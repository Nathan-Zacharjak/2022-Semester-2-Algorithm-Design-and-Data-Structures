make: compile run

compile: EfficientTruckloads.cpp Truckloads.cpp Reverse.cpp main.cpp
	g++ EfficientTruckloads.cpp Truckloads.cpp Reverse.cpp main.cpp -o main.out -std=c++11 -O2 -Wall

run:
	./main.out