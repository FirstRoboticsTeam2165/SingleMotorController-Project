/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <Commands/Subsystem.h>  // OK
#include <ctre/Phoenix.h>  // OK
#include <WPILib.h>


class MotorCntrl : public frc::Subsystem {
 private:
  // It's desirable that everything possible under private except
  // for methods that implement subsystem capabilities
    std::shared_ptr<WPI_TalonSRX> m_Talon;
    double rot_rate;

 public:
  MotorCntrl();
  void InitDefaultCommand() override;
  void SetRotationRate(double);
};
