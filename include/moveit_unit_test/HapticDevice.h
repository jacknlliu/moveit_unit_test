#ifndef HAPTIC_DEVICE_H__
#define HAPTIC_DEVICE_H__

class HapticDevice
{
	public:
		HapticDevice();
        virtual ~HapticDevice();

		int device_count_;
};

#endif
