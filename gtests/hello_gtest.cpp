#include <gtest/gtest.h>
#include "basicds.h"

// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions) {
  // Expect two strings not to be equal.
  EXPECT_STRNE("hello", "world");
  // Expect equality.
  EXPECT_EQ(mylibrary::addTwoNumbers(5, 24), 29);
}

