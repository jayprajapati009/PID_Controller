/**
 * @file main.cpp
 * @author Jay Prajapati (Jay Prajapti)
 * @brief souce file to run all the test cases written in "test.cpp"
 * @version 0.1
 * @date 2023-10-10
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <gtest/gtest.h>

#include "pid_controller.hpp"

/**
 * @brief run all tests
 *
 * @param argc
 * @param argv
 * @return int
 */
int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
