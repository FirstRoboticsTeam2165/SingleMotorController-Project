/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <WPILib.h>

class OI {
private:
//  shared pointer to joystick
    std::shared_ptr<Joystick> m_Joystick;
// Joystick USB
    static constexpr int USB_0 = 0;
 public:
  OI();
// declare method to provide public access to joystick
std:: shared_ptr<Joystick> getJoystick();  

};
