make: compile run

compile: Player.cpp Computer.cpp Human.cpp Referee.cpp Avalanche.cpp Bureaucrat.cpp Crescendo.cpp FistfullODollars.cpp PaperDoll.cpp RandomComputer.cpp Toolbox.cpp Tournament.cpp main.cpp
	g++ Player.cpp Computer.cpp Human.cpp Referee.cpp Avalanche.cpp Bureaucrat.cpp Crescendo.cpp FistfullODollars.cpp PaperDoll.cpp RandomComputer.cpp Toolbox.cpp Tournament.cpp main.cpp -o main.out -std=c++11 -O2 -Wall

run:
	./main.out