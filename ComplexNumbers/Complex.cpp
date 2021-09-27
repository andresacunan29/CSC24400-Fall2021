#include "Complex.hpp"

#include <iostream>

using namespace std;


Complex::Complex()
{
  _real=0;
  _imaginary=0;
}

Complex::Complex(double r, double i)
{
  _real=r;
  _imaginary=i;
}

Complex
Complex::operator+(Complex otherNum)
{
  Complex answer;

  answer._real = _real + otherNum._real;
  answer._imaginary  = _imaginary + otherNum._imaginary;
  
  return answer;
}
Complex
Complex::operator-(Complex otherNum)
{
  Complex answer;

  answer._real = _real - otherNum._real;
  answer._imaginary  = _imaginary - otherNum._imaginary;
  
  return answer;
}

void
Complex::print()
{
  cout << _real << '+' << _imaginary << 'i';
}
