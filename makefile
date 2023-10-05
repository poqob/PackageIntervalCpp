all: compile run
	


compile:
	
	g++ -I ./include/ -o ./lib/Timer.o -c ./src/Timer.cpp
	g++ -I ./include/ -o ./lib/Interval.o -c ./src/Interval.cpp
	g++ -c ./src/main.cpp -o ./lib/main.o 

	g++  ./lib/Timer.o ./lib/Interval.o ./lib/main.o -o ./bin/program

run:
	./bin/program