#include <gtest/gtest.h>
#include "../mathlib/mathlib.h"
#include "../stringlib/stringlib.h"
#include "../geomlib/geomlib.h"

// Google Test Basics 
TEST(Mathtests, tests) {
    EXPECT_EQ(add(5,3),8);
    EXPECT_EQ(multiply(5,3),15);
}

TEST(Mathtests2, moretests) {
    EXPECT_NE(add(5,3),5);
    EXPECT_LE(add(5,3), 2000);

}