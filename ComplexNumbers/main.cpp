#include "Complex.hpp"

#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  Complex zero;

  Complex myNum(1,2), // 1+2i
    myNum2(1,-2),     // 1-2i
    mySum;

  mySum = myNum * myNum2;   // want mySum: 5
  //mySum = myNum.operator+(myNum2);
  
  zero.print();
  cout << endl;
  myNum.print();
  cout << endl;

  mySum.print();
  
  return 0;
}
