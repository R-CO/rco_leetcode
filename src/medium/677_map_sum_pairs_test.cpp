/**
 * Author: R-CO
 * E-mail: daniel1820kobe@gmail.com
 **/
#include "677_map_sum_pairs.hpp"
using namespace map_sum_pairs;

#include <gtest/gtest.h>

TEST(MapSumPairs, case_1) {
  MapSum* obj = new MapSum();
  obj->insert("apple", 3);
  EXPECT_EQ(obj->sum("ap"), 3);
  obj->insert("app", 2);
  EXPECT_EQ(obj->sum("ap"), 5);

  delete obj;
}

TEST(MapSumPairs, case_2) {
  MapSum* obj = new MapSum();
  obj->insert("aa", 3);
  EXPECT_EQ(obj->sum("a"), 3);
  obj->insert("app", 2);
  obj->insert("apple", 2);
  EXPECT_EQ(obj->sum("ap"), 4);

  delete obj;
}

TEST(MapSumPairs, case_3) {
  MapSum* obj = new MapSum();
  obj->insert("aa", 3);
  EXPECT_EQ(obj->sum("a"), 3);
  obj->insert("aa", 2);
  EXPECT_EQ(obj->sum("a"), 2);
  EXPECT_EQ(obj->sum("aa"), 2);
  obj->insert("aaa", 3);
  EXPECT_EQ(obj->sum("aaa"), 3);
  EXPECT_EQ(obj->sum("bbb"), 0);

  delete obj;
}
