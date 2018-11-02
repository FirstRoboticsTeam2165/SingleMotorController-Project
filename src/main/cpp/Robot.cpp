/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include <Robot.h>

#include <Commands/Scheduler.h>
#include <SmartDashboard/SmartDashboard.h>

// static smart ptrs to provide access to various commands e.g.,
// see Requires(Robot::m_MotorCntrl.get()); in RunMotorJoystick.cpp


  std::unique_ptr<OI> Robot::m_OI;
  std::shared_ptr<MotorCntrl> Robot::m_MotorCntrl;
  std::shared_ptr<ExampleSubsystem> Robot::m_ExampleSub;



void Robot::RobotInit() {
  RobotMap::init();


 
// static smart ptrs to objects of classes defined here
m_MotorCntrl.reset(new MotorCntrl());
m_OI.reset(new OI());
m_ExampleSub.reset(new ExampleSubsystem());
}

/**
 * This function is called every robot packet, no matter the mode. Use
 * this for items like diagnostics that you want ran during disabled,
 * autonomous, teleoperated and test.
 *
 * <p> This runs after the mode specific periodic functions, but before
 * LiveWindow and SmartDashboard integrated updating.
 */
void Robot::RobotPeriodic() {}

/**
 * This function is called once each time the robot enters Disabled mode. You
 * can use it to reset any subsystem information you want to clear when the
 * robot is disabled.
 */
void Robot::DisabledInit() {}

void Robot::DisabledPeriodic() { frc::Scheduler::GetInstance()->Run(); }


void Robot::AutonomousInit() {
 
}

void Robot::AutonomousPeriodic() { frc::Scheduler::GetInstance()->Run(); }

void Robot::TeleopInit() {
  
}

void Robot::TeleopPeriodic() { frc::Scheduler::GetInstance()->Run(); }

void Robot::TestPeriodic() {}

#ifndef RUNNING_FRC_TESTS
START_ROBOT_CLASS(Robot)
#endif
