// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "commands/TankDrive.h"

TankDrive::TankDrive(DriveSubsystem* subsystem)
    : m_subsystem{subsystem} {}


void TankDrive::Execute() {
    m_subsystem->Drive();
}