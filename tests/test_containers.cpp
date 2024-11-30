//
// Created by ray on 28.11.2024.
//
#include <gtest/gtest.h>
#include <iostream>

//int main(int argc, char **argv)
//{
//  std::cout << "___tests start___" << std::endl;
//  ::testing::InitGoogleTest(&argc, argv);
//  return RUN_ALL_TESTS();
//}


#include <string>
using std::string;

const char *actualValTrue  = "hello gtest";
const char *actualValFalse = "hello world";
const char *expectVal      = "hello gtest";

TEST(StrCompare, CStrEqual) {
  EXPECT_STREQ(expectVal, actualValTrue);
}

TEST(StrCompare, CStrNotEqual) {
  EXPECT_STREQ(expectVal, actualValFalse);
}