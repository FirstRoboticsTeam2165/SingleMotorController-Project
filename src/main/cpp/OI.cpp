/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "OI.h"
#include "Commands/RunMotorJoystick.h"


OI::OI() {
//  Assign joystick pointer to an instance
    m_Joystick.reset(new Joystick(USB_0));  // Logitech Pro 3D   
}

    std::shared_ptr<Joystick> OI::getJoystick() {return m_Joystick;}