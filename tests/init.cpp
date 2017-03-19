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
