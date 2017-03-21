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
	double real_()const;
	double imaginary_()const;
	TComplex operator * (const TComplex &N)const;
	TComplex operator / (const TComplex &N)const;
	TComplex& operator += (const TComplex &N);
	TComplex& operator -= (const TComplex &N);
	TComplex& operator *= (const TComplex &N);
	TComplex& operator /= (const TComplex &N);
	TComplex& operator = (const TComplex &N);
	bool operator == (const TComplex &N)const;
	friend ostream& operator << (ostream &out, const TComplex &N);
	friend istream& operator >> (istream &in, TComplex &N);
};
