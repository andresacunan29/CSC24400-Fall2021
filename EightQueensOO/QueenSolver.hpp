#ifndef _QUEENSOLVER_HPP_
#define _QUEENSOLVER_HPP_

#define BOARD_SIZE 100



class QueenSolver
{
private:
  int _bSize;
  char _myArray[BOARD_SIZE][BOARD_SIZE];
public:
  
  //void initBoard(int bSize);
  QueenSolver(int bSize) ;

  bool solveBoard();
  void printBoard();
};


#endif
