#include "moveit_unit_test/HapticDevice.h"

// haptic device API
#include "moveit_unit_test/dhdc.h"

#include "ros/ros.h"

HapticDevice::HapticDevice()
{
    device_count_ = dhdGetDeviceCount();
}


HapticDevice::~HapticDevice()
{
}