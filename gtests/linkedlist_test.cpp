#include <gtest/gtest.h>
#include "basicds.h"

TEST(MyLinkedList, DefaultConstructor) {
  mylibrary::LinkedListInt test;
  EXPECT_EQ(test.len(), 0);
}

const int arrayTest[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
constexpr int size = std::size(arrayTest);

TEST(MyLinkedList, AppendAndGet) {
  mylibrary::LinkedListInt test;

  for (const int n: arrayTest) {
    test.append(n);
  }

  // Check
  for (int i = 0; i < test.len(); i++) {
    EXPECT_EQ(test.get(i), arrayTest[i]);
  }
}