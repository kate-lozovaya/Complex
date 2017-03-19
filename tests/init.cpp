#include <complex.hpp>
#include <catch.hpp>

SCENARIO("complex init", "[init]") 
{
	TComplex complex;
	REQUIRE(complex.real() == 0);
	REQUIRE(complex.imaginary() == 0);
}

SCENARIO("complex with params", "[init]") 
{
	TComplex complex(2,3);
	REQUIRE(complex.real() == 2);
	REQUIRE(complex.imaginary() == 3);
}

SCENARIO("*", "[init]") 
{
	TComplex A(7, 6);
	TComplex B(5, 4);
	TComplex C(11, 58);
	REQUIRE(A*B==C);
}
