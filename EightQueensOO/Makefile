qSolve: main.o QueenSolver.o
	g++ -o qSolve main.o QueenSolver.o

main.o: main.cpp QueenSolver.hpp
	g++ -c -Wall -ansi -pedantic main.cpp

QueenSolver.o: QueenSolver.cpp QueenSolver.hpp
	g++ -c -Wall -ansi -pedantic QueenSolver.cpp

clean:
	/bin/rm -f *.o qSolve *~


