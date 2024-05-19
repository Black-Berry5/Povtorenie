#include "pch.h"
#include "D:\курсы информатика\Звёздачки\Звёздачки.cpp"
TEST(TestPlusNumber, Test1) {
 int n = 5;
std::vector <int> vec = { 1, 2, 3, 4 };
   std::vector <int> newVec = AddNumber(vec, n);
  EXPECT_TRUE(newVec[0] == 6);
  EXPECT_TRUE(newVec[1] == 7);
  EXPECT_TRUE(newVec[2] == 8);
  EXPECT_TRUE(newVec[3] == 9);
  EXPECT_EQ(vec.size(), newVec.size());
}
