#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/hi_equals_hi.hpp"


TEST_CASE( "Comparing String one and string two returns -1." ) {
    REQUIRE( WhatAreMyStrings("String one","string two") == -1 );
}
TEST_CASE( "Comparing String one and string one returns 0." ) {
    REQUIRE( WhatAreMyStrings("String one","string one") == 0 );
}
TEST_CASE( "Comparing String two and string one returns 1." ) {
    REQUIRE( WhatAreMyStrings("String two","string one") == 1 );
}
