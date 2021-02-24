#include "Islands.hpp"
#include <gtest/gtest.h>

struct TestIslands : public ::testing::Test {
    Coordinates coordinate = Coordinates(5, 5);
};

TEST_F(TestIslands, checkComparisionOperatorCoordinates) {
    Coordinates coordinate2 = Coordinates(5, 5);
    ASSERT_TRUE(coordinate == coordinate2);
}