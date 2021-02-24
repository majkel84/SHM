#include <string>

#include "Cargo.hpp"
#include <gtest/gtest.h>

struct TestCargo : public ::testing::Test {
    Cargo cargo = Cargo("cargo", 10, 0.40);
};

TEST_F(TestCargo, checkCargoComparisionOperator) {
    Cargo cargo2 = Cargo("cargo", 10, 0.40);
    Cargo cargo3 = Cargo("cargo", 10, 0.50);
    ASSERT_TRUE(cargo==cargo2);
    ASSERT_FALSE(cargo==cargo3);
}

TEST_F(TestCargo, checkOperatorsAddandSub) {
    cargo += 10;
    ASSERT_EQ(cargo.getAmount(), 20);
    cargo -= 5;
    ASSERT_EQ(cargo.getAmount(), 15);
}