#include "complex.hpp"

TComplex::TComplex()
{
	real = 0;
	imaginary = 0;
}
TComplex::TComplex(double b, double c)
{
	real = b;
	imaginary = c;
}
TComplex::TComplex(const TComplex &A)
{
	real = A.real;
	imaginary = A.imaginary;
}
double TComplex::real_()const
{
	return real;
}
double TComplex::imaginary_()const
{
	return imaginary;
}
TComplex TComplex::operator * (const TComplex &N)const 
{
	return TComplex(real*N.real - imaginary*N.imaginary, real*N.imaginary + imaginary*N.real);
}
TComplex TComplex::operator / (const TComplex &N)const 
{
	return TComplex((real*N.real + imaginary*N.imaginary) / (N.real*N.real + N.imaginary*N.imaginary), (N.real*imaginary - real*N.imaginary) / (N.real*N.real + N.imaginary*N.imaginary));
}
TComplex& TComplex::operator += (const TComplex &N)
{
	real += N.real;
	imaginary += N.imaginary;
	return *this;
}
TComplex& TComplex::operator -= (const TComplex &N)
{
	real -= N.real;
	imaginary -= N.imaginary;
	return *this;
}
TComplex& TComplex::operator *= (const TComplex &N)
{
	double a = real*N.real - imaginary*N.imaginary;
	imaginary = real*N.imaginary + imaginary*N.real;
	real = a;
	return *this;
}
TComplex& TComplex::operator /= (const TComplex &N)
{
	double a = ((real*N.real + imaginary*N.imaginary) / (N.real*N.real + N.imaginary*N.imaginary));
	imaginary = ((N.real*imaginary - real*N.imaginary) / (N.real*N.real + N.imaginary*N.imaginary));
	real = a;
	return *this;
}
TComplex&  TComplex::operator = (const TComplex &N)
{
	if (&N == this)
		return *this;
	real = N.real;
	imaginary = N.imaginary;
	return *this;
}
bool TComplex::operator == (const TComplex &N)
{
	if (real == N.real&&imaginary == N.imaginary)
		return true;
	return false;
}
ostream& operator << (ostream &out, const TComplex &N)
{
	if (N.imaginary > 0)
	{
		out << N.real << " + " << N.imaginary << "*i" << endl;
	}
	else
	{
		if (N.imaginary == 0)
			out << N.real << endl;
		else
			out << N.real << " " << N.imaginary << "*i" << endl;
	}
	return out;
}
istream& operator >> (istream &in, const TComplex &N)
{
	cout << "Enter the real part of the complex number ";
	in >> N.real;
	cout << "Enter the imaginary part of the complex number ";
	in >> N.imaginary;
	return in;
}
