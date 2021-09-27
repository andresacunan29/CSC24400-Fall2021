#ifndef _COMPLEX_HPP_
#define _COMPLEX_HPP_

class Complex
{
private:
  double _real;
  double _imaginary;
public:
  Complex();

  Complex(double realPart, double ImaginaryPart);

  Complex operator+(Complex rightHandSide);
  Complex operator-(Complex rightHandSide);
  
  void print();
};

#endif
