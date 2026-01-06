#include <iostream>
#include <catch2/catch_test_macros.hpp>
#include <cstdint>
#include "my_list.h"

List nodes;

TEST_CASE("nodes", "[nodes]")
{
    SECTION("first-empty")
    {
        CHECK(nodes.Empty() == true);
    }

    SECTION("iz_pustogo")
    {
        REQUIRE_THROWS(nodes.PopFront());
        REQUIRE_THROWS(nodes.PopBack());
    }

    nodes.PushFront(5);
    nodes.PushBack(6);

    SECTION("not-empty")
    {
        CHECK(nodes.Empty() == false);
        CHECK(nodes.Size() == 2);
    }

    nodes.Clear();

    SECTION("second-empty")
    {
        CHECK(nodes.Empty() == true);
    }
};