/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/


#include <Subsystems/MotorCntrl.h>
#include <RobotMap.h>
#include <Commands/RunMotorJoystick.h>

MotorCntrl::MotorCntrl() : frc::Subsystem("MotorCntrl") {
    m_Talon = RobotMap::singleMotor1;
    rot_rate = 0.0;
    m_Talon->SetInverted(false);
}

void MotorCntrl::InitDefaultCommand() {
  // Set the default command for a subsystem here.
  // SetDefaultCommand(new MySpecialCommand());
    SetDefaultCommand(new RunMotorJoystick());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.

void MotorCntrl::SetRotationRate(double rot_rate) {
  m_Talon->Set(rot_rate); //y-axis position of joystick determine rotational speed
}
