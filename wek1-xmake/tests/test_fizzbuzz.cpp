#include <gtest/gtest.h>
#include "../include/fizzbuzz.h"

TEST(FizzBuzzTest, ReturnsFizzForMultiplesOfThree) {
    EXPECT_EQ(fizzBuzz(3), "Fizz");
    EXPECT_EQ(fizzBuzz(6), "Fizz");
    EXPECT_EQ(fizzBuzz(9), "Fizz");
}

TEST(FizzBuzzTest, ReturnsBuzzForMultiplesOfFive) {
    EXPECT_EQ(fizzBuzz(5), "Buzz");
    EXPECT_EQ(fizzBuzz(10), "Buzz");
}

TEST(FizzBuzzTest, ReturnsFizzBuzzForMultiplesOfFifteen) {
    EXPECT_EQ(fizzBuzz(15), "FizzBuzz");
    EXPECT_EQ(fizzBuzz(30), "FizzBuzz");
}

TEST(FizzBuzzTest, ReturnsNumberForNonMultiples) {
    EXPECT_EQ(fizzBuzz(1), "1");
    EXPECT_EQ(fizzBuzz(2), "2");
    EXPECT_EQ(fizzBuzz(4), "4");
    EXPECT_EQ(fizzBuzz(7), "7");
    EXPECT_EQ(fizzBuzz(8), "8");
    EXPECT_EQ(fizzBuzz(11), "11");
    EXPECT_EQ(fizzBuzz(13), "13");
    EXPECT_EQ(fizzBuzz(14), "14");
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}