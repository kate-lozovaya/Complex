#include <iostream>
using namespace std;

class TComplex
{
private:
	double real, imaginary;
public:
	TComplex();
	TComplex(double b, double c);
	TComplex(const TComplex &A);
	double real_();
	double imaginary_();
	TComplex operator * (TComplex &N)const;
	TComplex operator / (TComplex &N)const;
	TComplex& operator += (const TComplex &N);
	TComplex& operator -= (const TComplex &N);
	TComplex& operator *= (const TComplex &N);
	TComplex& operator /= (const TComplex &N);
	TComplex& operator = (const TComplex &N);
	const bool operator == (const TComplex &N);
	friend ostream& operator << (ostream &out, TComplex &N);
	friend istream& operator >> (istream &in, TComplex &N);
};
