#include <complex.hpp>
#include <catch.hpp>

SCENARIO("complex init", "[init]") 
{
	TComplex complex;
	REQUIRE(complex.real_() == 0);
	REQUIRE(complex.imaginary_() == 0);
}

SCENARIO("complex with params", "[init]") 
{
	TComplex complex(2,3);
	REQUIRE(complex.real_() == 2);
	REQUIRE(complex.imaginary_() == 3);
}

SCENARIO("*", "[init]") 
{
	TComplex A(7, 6);
	TComplex B(5, 4);
	TComplex C(11, 58);
	REQUIRE(A*B==C);
}
