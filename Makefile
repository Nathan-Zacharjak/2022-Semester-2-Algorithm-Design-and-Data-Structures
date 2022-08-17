make: compile run

compile: Library.cpp Document.cpp Book.cpp Main.cpp
	g++ Library.cpp Document.cpp Book.cpp main.cpp -o main.out -std=c++11 -O2 -Wall

run:
	./main.out