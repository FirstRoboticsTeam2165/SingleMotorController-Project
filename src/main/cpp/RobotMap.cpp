/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "RobotMap.h"
#include <WPILib.h>

    std::shared_ptr<WPI_TalonSRX> RobotMap::singleMotor1; 
    
    void RobotMap::init() {
        
        singleMotor1.reset(new WPI_TalonSRX(MOTOR_CTRL_1));

    }