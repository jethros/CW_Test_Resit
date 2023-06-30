#pragma once

#include <gtest/gtest.h>
#include <iostream>
#include <string>
#include <map>
#include "Calculations.h"



// The fixture for testing class Foo.
class Testing :public ::testing::Test {



protected:
    // You can remove any or all of the following functions if their bodies would
    // be empty.

    Testing() {
 
    }

    void t_Testing() {
        // You can do set-up work for each test here.
    }

    ~Testing() override {
        // You can do clean-up work that doesn't throw exceptions here.
    }

    // If the constructor and destructor are not enough for setting up
    // and cleaning up each test, you can define the following methods:

    virtual void SetUp() override {
        // Code here will be called immediately after the constructor (right
        // before each test).
        
    }

    virtual void TearDown() override {
        // Code here will be called immediately after each test (right
        // before the destructor).
    }


};

TEST_F(Testing, test) {
    EXPECT_TRUE(t);
    EXPECT_FALSE(t);
}
