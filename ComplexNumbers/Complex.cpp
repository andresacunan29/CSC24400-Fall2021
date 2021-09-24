#include "Complex.hpp"

#include <iostream>

using namespace std;

Complex::Complex()
{
  _real=0;
  _imaginary=0;
}

void
Complex::print()
{
  cout << _real << '+' << _imaginary << 'i';
}
