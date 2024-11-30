//
// Created by ray on 28.11.2024.
//
#include <gtest/gtest.h>
#include <iostream>
#include "../src/linkedlist.h"
#include "../src/dynarray.h"


#include <string>
using std::string;

const char *actualValTrue  = "hello gtest";
const char *actualValFalse = "hello world";
const char *expectVal      = "hello gtest";

TEST(StrCompare, CStrEqual) {
  std::cout << "StrCompare Test Start\n";
  EXPECT_STREQ(expectVal, actualValTrue) << "StrCompare FAIL" << actualValTrue;
}

TEST(StrCompare, CStrNotEqual) {
  EXPECT_STREQ(expectVal, actualValFalse);
}