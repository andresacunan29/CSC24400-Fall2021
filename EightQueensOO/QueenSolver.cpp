#include "QueenSolver.hpp"
 
#include <iostream>

using namespace std;



bool canPlace(char[][BOARD_SIZE], int, int);

void printRowBorder(int bS)
{
  for (int col=0; col<bS; col++)
    cout << "+-";
  cout << '+' << endl;
}

void
QueenSolver::printBoard()
{
  for (int row=0; row<_bSize; row++)
  {
    printRowBorder(_bSize);
    for (int col=0; col<_bSize; col++)
    {
      cout << "|" ;
      cout << _myArray[row][col];
    }
    cout << "|" << endl;
  }
  printRowBorder(_bSize);
}


QueenSolver::QueenSolver(int size)
{

  _bSize = size;
  
  for (int row=0; row<size; row++)
  {
    for (int col=0; col<size; col++)
      _myArray[row][col]=' ';
  } 
}

bool solveBoardHelper (char myArray[][BOARD_SIZE],
		       int fromCol, int numRows)
{
  // base case - if we've filled the board, we are done. SUCCESSFULLY!
  if (fromCol >= numRows)
    return  true;

  // try to place the quees in each possible row in this column.
  for (int row=0; row< numRows; row++)
    {
      if ( canPlace(myArray, row, fromCol) )
	{
	  // add code to try and place the queen ...
	  myArray[row][fromCol] = 'Q';
	  bool itWorked = solveBoardHelper(myArray,
					   fromCol+1, numRows);

	  if (itWorked)
	    return true;

	  // if it didn't work, need to put this column's queen somewhere else ....
	  myArray[row][fromCol]=' ';
	  
	}
    }
  // if we get here, tried all rows for this queen, and none worked. Therefore
  //   we couldn't find a solution to this problem. 
  return false;
}

bool canPlace(char myArray[][BOARD_SIZE], int fromRow, int fromCol)
{
  // check the row
  for (int col=fromCol-1; col>=0; col--)
    {
      if (myArray[fromRow][col] == 'Q')
	return false;
    }

  // check UL diagonal
  int offset=1;
  while(fromCol-offset>=0 && fromRow-offset>=0)
    {
      if (myArray[fromRow-offset][fromCol-offset] == 'Q')
	return false;
      
      offset++;
    }

  // check LL diagonal
  offset=1;
  while(fromCol-offset>=0 && fromRow+offset<BOARD_SIZE) // uh, oh, we should FIX!
    {
      if (myArray[fromRow+offset][fromCol-offset] == 'Q')
	return false;

      offset++;
    }

  return true;
  
}

bool
QueenSolver::solveBoard()
{
  cerr << "Solve  board not yet implemented!" << endl;

  cout << " bSize = " << _bSize << endl;
  return solveBoardHelper(_myArray, 0, _bSize);
  
}

