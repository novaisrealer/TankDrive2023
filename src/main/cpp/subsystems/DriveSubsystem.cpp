#include "subsystems/DriveSubsystem.h"


DriveSubsystem::DriveSubsystem(){

};

void DriveSubsystem::Drive(){
    m_drive.ArcadeDrive(m_xbox.GetLeftY(), m_xbox.GetLeftX());
}