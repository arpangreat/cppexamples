#include <gtest/gtest.h>

TEST(HelloTest, BasicAssertion) {
  EXPECT_STRNE("hello", "world");
  // Expect equality.
  EXPECT_EQ(7 * 6, 42);
}
