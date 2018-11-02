/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <WPILib.h>
#include <Commands/Command.h>
#include <TimedRobot.h>
#include "RobotMap.h"
#include "OI.h"

// Add #includes for Autonomous Commands here
//#include "Commands/AutonomousCommand.h"

// Add #includes for Systems here
#include "Subsystems/MotorCntrl.h"
#include "Subsystems/ExampleSubsystem.h"

class Robot : public frc::TimedRobot {
 public:

// Declare smart ptrs for auto, oi and subsystems
  //std::unique_ptr<Command> m_autonomousCommand;
  static std::unique_ptr<OI> m_OI;
  static std::shared_ptr<MotorCntrl> m_MotorCntrl;
  static std::shared_ptr<ExampleSubsystem> m_ExampleSub;

// Declare a Subsystem type shared_ptr for each Subsystem
// ptrs provide access to methods in subsystems


// Virtual Classes to be defined
  void RobotInit() override;
  void RobotPeriodic() override;
  void DisabledInit() override;
  void DisabledPeriodic() override;
  void AutonomousInit() override;
  void AutonomousPeriodic() override;
  void TeleopInit() override;
  void TeleopPeriodic() override;
  void TestPeriodic() override;

 
 private:

 // method for using buttons on Driver Station to select autonomous routine
  // Have it null by default so that if testing teleop it
  // doesn't have undefined behavior and potentially crash.
 // frc::Command* m_autonomousCommand = nullptr;
 // ExampleCommand m_defaultAuto;
//  MyAutoCommand m_myAuto;
//  frc::SendableChooser<frc::Command*> m_chooser;
};
