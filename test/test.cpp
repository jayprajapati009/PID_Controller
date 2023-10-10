/**
 * @file test.cpp
 * @author Jay Prajapati (jayp@umd.edu)
 * @brief  Source file to write all the test cases
 * @version 0.1
 * @date 2023-10-10
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <gtest/gtest.h>

#include "pid_controller.hpp"

/**
 * @brief Test to verify the controllers output for the specified params
 *
 */
TEST(pid_controller_test, test_output_vel_1) {
  pid_controller pid(1.0, 0.2, 0.1, 0.1);
  double setpoint = 50.0;
  double actualVelocity = 0.0;
  double output = pid.compute_velocity(setpoint, actualVelocity);

  EXPECT_EQ(output, 2);
}

/**
 * @brief Test to verify the controllers output for the specified params
 *
 */
TEST(pid_controller_test, test_output_vel_2) {
  pid_controller pid(0.5, 0.1, 0.2, 0.1);
  double setpoint = 30.0;
  double actualVelocity = 10.0;
  double output = pid.compute_velocity(setpoint, actualVelocity);

  EXPECT_EQ(output, -2.9);
}