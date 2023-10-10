/**
 * @file pid_controller.hpp
 * @author Jay (jayp@umd.edu)
 * @brief This file declares the pid_controller class and the functionalities
 *        to compute a new velocity given a target setpoint and actual velocity
 *
 * @version 0.1
 * @date 2023-10-10
 *
 * @copyright Copyright (c) 2023
 *
 */

#pragma once

/**
 * @brief pid_controller class
 *
 */
class pid_controller {
 private:
  // propotional gain
  double Kp;

  // integral gain
  double Ki;

  // derivative gian
  double Kd;

  // previous error and integral
  double previous_error;
  double integral;

  // fixed time stamp
  double dt;

 public:
  /**
   * @brief Constructor to instantiate pid_controller
   *
   * @param kp // propotional gain
   * @param ki // integral gain
   * @param kd // derivate gain
   * @param dt // fixed time difference (dt = 0.1)
   */
  pid_controller(double kp, double ki, double kd, double dt)
      : Kp(kp), Ki(ki), Kd(kd), dt(dt) {}

  /**
   * @brief compute new velocity based on a target set point and actual velocity
   *
   * @param set_point  // target set-point
   * @param actual_velocity // actual velocity
   * @return double
   */
  double compute_velocity(double set_point, double actual_velocity) {}
};
