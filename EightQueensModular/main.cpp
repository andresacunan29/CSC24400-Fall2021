#include "QueenSolver.hpp"

#include <iostream>

using namespace std;


int main(int argc, char *argv[])
{
  int probSize;
  cout << "Enter the actual board size: ";
  cin >> probSize;
  
  initBoard(probSize);
  solveBoard(probSize);
  printBoard(probSize);
  
  return 0;
}
