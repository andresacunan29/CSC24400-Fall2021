#include "QueenSolver.hpp"

#include <iostream>

using namespace std;


int main(int argc, char *argv[])
{
  int probSize;
  cout << "Enter the actual board size: ";
  cin >> probSize;

  //  solver.initBoard(probSize);
  QueenSolver solver(probSize);
  QueenSolver FiveByFive(5);
  

  solver.solveBoard();
  FiveByFive.solveBoard();

  
  solver.printBoard();
  FiveByFive.printBoard();
  
  return 0;
}
