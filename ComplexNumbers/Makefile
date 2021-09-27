CC=g++ -Wall -ansi -pedantic


plexy: Complex.o main.o
	$(CC) -o plexy Complex.o main.o

Complex.o: Complex.cpp Complex.hpp
	$(CC) -c Complex.cpp

main.o: main.cpp Complex.hpp
	$(CC) -c main.cpp

clean:
	/bin/rm -rf *.o *~ plexy

