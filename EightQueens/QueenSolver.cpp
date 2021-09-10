#include <iostream>

using namespace std;

#define BOARD_SIZE 15

char myArray[BOARD_SIZE][BOARD_SIZE];

bool canPlace(int, int);

void printRowBorder()
{
  for (int col=0; col<BOARD_SIZE; col++)
    cout << "+-";
  cout << '+' << endl;
}

void printBoard()
{
  for (int row=0; row<BOARD_SIZE; row++)
  {
    printRowBorder();
    for (int col=0; col<BOARD_SIZE; col++)
    {
      cout << "|" ;
      cout << myArray[row][col];
    }
    cout << "|" << endl;
  }
  printRowBorder();
}

void initBoard()
{
  for (int row=0; row<BOARD_SIZE; row++)
  {
    for (int col=0; col<BOARD_SIZE; col++)
      myArray[row][col]=' ';
  }
}

bool solveBoard (int fromCol)
{
  // base case - if we've filled the board, we are done. SUCCESSFULLY!
  if (fromCol >= BOARD_SIZE)
    return  true;

  // try to place the quees in each possible row in this column.
  for (int row=0; row< BOARD_SIZE; row++)
    {
      if ( canPlace(row, fromCol) )
	{
	  // add code to try and place the queen ...
	  myArray[row][fromCol] = 'Q';
	  bool itWorked = solveBoard(fromCol+1);

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

bool canPlace(int fromRow, int fromCol)
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
  while(fromCol-offset>=0 && fromRow+offset<BOARD_SIZE)
    {
      if (myArray[fromRow+offset][fromCol-offset] == 'Q')
	return false;

      offset++;
    }

  return true;
  
}

bool solveBoard()
{
  cerr << "Solve  board not yet implemented!" << endl;
  
  return solveBoard(0);
  
}

int main(int argc, char *argv[])
{
  initBoard();
  solveBoard();
  printBoard();
  
  return 0;
}
