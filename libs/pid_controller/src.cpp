/**
 * @file src.cpp
 * @author Jay Prajapati (jayp@umd.edu)
 * @brief Source file for the pid_controller class implementation
 * @version 0.1
 * @date 2023-10-10
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <iostream>

#include "pid_controller.hpp"

/**
 * @brief Computes the controller velocity given target setpoint and actual
 * velocity
 *
 * @param set_point
 * @param actual_velocity
 * @return double
 */
double pid_controller::compute_velocity(double set_point,
                                        double actual_velocity) {
  double error = set_point - actual_velocity;

  double pTerm = Kp * error;
  std::cout << Kp << ", pTerm" << pTerm << std::endl;

  integral += error * dt;
  double iTerm = Ki * integral;
  std::cout << "iTerm" << iTerm << std::endl;

  double dTerm = Kd * (error - previous_error) / dt;
  std::cout << "dTerm" << dTerm << std::endl;

  previous_error = error;

  double output = pTerm + iTerm + dTerm;
  std::cout << "output" << output << std::endl;

  return output;
}