#pragma once

#include <rev/CANSparkMax.h>
#include <frc2/command/SubsystemBase.h>
#include <frc/motorcontrol/MotorControllerGroup.h>
#include <frc/drive/DifferentialDrive.h>
#include <frc/XboxController.h>


class DriveSubsystem : public frc2::SubsystemBase {
public:
    DriveSubsystem();

    void Drive();

private:
    rev::CANSparkMax motor1{1, rev::CANSparkMaxLowLevel::MotorType::kBrushless};
    rev::CANSparkMax motor2{2, rev::CANSparkMaxLowLevel::MotorType::kBrushless};
    rev::CANSparkMax motor3{3, rev::CANSparkMaxLowLevel::MotorType::kBrushless};
    rev::CANSparkMax motor4{4, rev::CANSparkMaxLowLevel::MotorType::kBrushless};

    frc::MotorControllerGroup left{motor1, motor2}; 
    frc::MotorControllerGroup right{motor3, motor4};
    frc::DifferentialDrive m_drive{left, right};

    frc::XboxController m_xbox{0};
};

