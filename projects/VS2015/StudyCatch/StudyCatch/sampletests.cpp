#include "../../../../include/catch.hpp"

TEST_CASE("Test1", "[Test1Tag]") {
	REQUIRE(true);
}

TEST_CASE("Test2", "[.TestHidden]") {
	int a;
	REQUIRE(false);
}

TEST_CASE("Test3") {
	REQUIRE(true);
}

TEST_CASE("Test4") {
	REQUIRE(false);
}

TEST_CASE(".a") {
	REQUIRE(true);
}

TEST_CASE("*") {
	REQUIRE(false);
}