#include <iostream>

using namespace std;

char myArray[8][8];

void printRowBorder()
{
  for (int col=0; col<8; col++)
    cout << "+-";
  cout << '+' << endl;
}

void printBoard()
{
  for (int row=0; row<8; row++)
  {
    printRowBorder();
    for (int col=0; col<8; col++)
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
  for (int row=0; row<8; row++)
  {
    for (int col=0; col<8; col++)
      myArray[row][col]=' ';
  }
}

void solveBoard()
{
  cerr << "Solve  board not yet implemented!" << endl;
  
  myArray[4][4] = 'Q';
  myArray[0][2] = 'Q';
  
}

int main(int argc, char *argv[])
{
  initBoard();
  solveBoard();
  printBoard();
  
  return 0;
}
