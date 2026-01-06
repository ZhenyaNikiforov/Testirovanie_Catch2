#include <iostream>
#include <catch2/catch_test_macros.hpp>
#include <cstdint>
#include "my_list.h"

List nodes;

TEST_CASE("pustoj spisok")
{
  CHECK(nodes.Empty() == true);
  CHECK(nodes.Size() == 0);
  REQUIRE_THROWS(nodes.PopBack());
  REQUIRE_THROWS(nodes.PopFront());
}

TEST_CASE("zapolnyayem spisok")
{
  nodes.PushBack(5);
  nodes.PushFront(6);
  CHECK(nodes.Empty() == false);
  CHECK(nodes.Size() == 2);
}

TEST_CASE("Udalenie_na_polnom")
{
  REQUIRE_NOTHROW(nodes.PopBack());
  REQUIRE_NOTHROW(nodes.PopFront());
}
