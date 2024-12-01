//
// Created by ray on 28.11.2024.
//
#include <gtest/gtest.h>
#include <iostream>
#include "../src/linkedlist.h"
#include "../src/dynarray.h"
#include <typeinfo>

#include <string>

TEST(LinkedListTestSuit, LinkedListCTOR) {
  LinkedList linked_list = LinkedList<float>();
  const std::string actual_class_name(typeid(linked_list).name());
  const std::string expected_class_name{"LinkedList"};
  auto result = actual_class_name.find(expected_class_name);
  ASSERT_NE(result, std::string::npos);
}

TEST(LinkedListTestSuit, LinkedListPushBackSize) {
  LinkedList linked_list = LinkedList<int>();
  const int test_value = 10;
  linked_list.pushBack(test_value);
  const size_t actual_result = linked_list.size();
  const size_t expected_result = 1;
  ASSERT_EQ(expected_result, actual_result);
}

TEST(LinkedListTestSuit, LinkedListPushBackValue) {
  LinkedList linked_list = LinkedList<int>();
  const int test_value = 10;
  linked_list.pushBack(test_value);
  const int expected_value = test_value;
  auto actual_value = linked_list.getAt(static_cast<int>(linked_list.size() - 1))->data;
  ASSERT_EQ(expected_value, actual_value);
  auto actual_value1 = linked_list[static_cast<int>(linked_list.size() - 1)]->data;
  ASSERT_EQ(expected_value, actual_value1);
}

TEST(LinkedListTestSuit, LinkedListPushFrontValue) {
  LinkedList linked_list = LinkedList<int>();
  const int test_value = 10;
  const int expected_value = test_value;
  linked_list.pushFront(test_value);
  auto actual_value = linked_list.getAt(0)->data;
  ASSERT_EQ(expected_value, actual_value);
  auto actual_value1 = linked_list[0]->data;
  ASSERT_EQ(expected_value, actual_value1);

}

TEST(LinkedListTestSuit, LinkedListInsert) {
  LinkedList linked_list = LinkedList<int>();
  linked_list.pushBack(1);
  linked_list.pushBack(3);
  const int test_value = 2;
  const int expected_value = test_value;
  linked_list.insert(1, test_value);
  auto actual_value = linked_list.getAt(1)->data;
  ASSERT_EQ(expected_value, actual_value) << linked_list[0]->data << linked_list[1]->data << linked_list[2]->data;
  auto actual_value1 = linked_list[1]->data;
  ASSERT_EQ(expected_value, actual_value1) << linked_list[0]->data << linked_list[1]->data << linked_list[2]->data;;
}

TEST(LinkedListTestSuit, LinkedListPopBack) {
  LinkedList linked_list = LinkedList<int>();
  linked_list.pushBack(1);
  linked_list.pushBack(2);
  linked_list.popBack();
  try {
	linked_list[1];
  } catch (std::out_of_range const& err) {
	EXPECT_EQ(err.what(), std::string("Out of range"));
  }
}

TEST(LinkedListTestSuit, LinkedListPopFront) {
  LinkedList linked_list = LinkedList<int>();
  linked_list.pushBack(1);
  linked_list.pushBack(2);
  linked_list.popFront();
  auto expected_value = 2;
  int actual_value = linked_list[0]->data;
  ASSERT_EQ(expected_value, actual_value);
}

TEST(LinkedListTestSuit, LinkedListErase) {
  LinkedList linked_list = LinkedList<int>();
  linked_list.pushBack(1);
  linked_list.pushBack(2);
  linked_list.pushBack(3);
  linked_list.erase(1);
  int expected_value = 3;
  int actual_value = linked_list[1]->data;
  ASSERT_EQ(expected_value, actual_value);
}

TEST(LinkedListTestSuit, LinkedListGetAt) {
  LinkedList linked_list = LinkedList<int>();
  linked_list.pushBack(1);
  linked_list.pushBack(2);
  linked_list.pushBack(3);
  int expected_value = 2;
  int actual_value = linked_list.getAt(1)->data;
  ASSERT_EQ(expected_value, actual_value);
}

TEST(LinkedListTestSuit, LinkedListSize) {
  LinkedList linked_list = LinkedList<int>();
  linked_list.pushBack(1);
  linked_list.pushBack(2);
  linked_list.pushBack(3);
  int expected_value = 3;
  int actual_value = static_cast<int>(linked_list.size());
  ASSERT_EQ(expected_value, actual_value);
}