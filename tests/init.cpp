#include <complex.hpp>
#include <catch.hpp>

SCENARIO("complex init") 
{
	TComplex complex;
	REQUIRE(complex.real_() == 0);
	REQUIRE(complex.imaginary_() == 0);
}

SCENARIO("complex with params") 
{
	TComplex complex(2,3);
	REQUIRE(complex.real_() == 2);
	REQUIRE(complex.imaginary_() == 3);
}

SCENARIO("copy") 
{
	TComplex A(7, 6);
	TComplex B(A);
	REQUIRE(B.real_() == 7);
	REQUIRE(B.imaginary_() == 6);
}

SCENARIO("*") 
{
	TComplex A(4, 5);
	TComplex B(4, 5);
	TComplex C(-9, 40);
	REQUIRE(A*B==C);
}

SCENARIO("/")
{
	TComplex A(4, 5);
	TComplex B(4, 5);
	TComplex C(1, 0);
	REQUIRE(A/B==C);
}

SCENARIO("+=")
{
	TComplex A(4, 5);
	TComplex B(4, 5);
	TComplex C(8, 10);
	REQUIRE((A+=B)==C);
}

SCENARIO("-=")
{
	TComplex A(9, 9);
	TComplex B(4, 5);
	TComplex C(5, 4);
	REQUIRE((A-=B)==C);
}

SCENARIO("*=")
{
	TComplex A(4, 5);
	TComplex B(4, 5);
	TComplex C(-9, 40);
	REQUIRE((A*=B)==C);
}

SCENARIO("/=")
{
	TComplex A(4, 5);
	TComplex B(4, 5);
	TComplex C(1, 0);
	REQUIRE((A/=B)==C);
}

SCENARIO("=")
{
	TComplex A(4, 5);
	TComplex B = A;
	REQUIRE(A == B);
}


SCENARIO("==")
{
	TComplex A(4, 5);
	TComplex B(4, 5);
	bool f;
	if (A == B)
		f = true;
	REQUIRE(f == true);
}









