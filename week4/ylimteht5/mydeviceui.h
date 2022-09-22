#ifndef MYDEVICEUI_H
#define MYDEVICEUI_H

#include "devicemouse.h"

class myDeviceUI
{
public:
    myDeviceUI();
    ~myDeviceUI();
    void uiShowMenu();
    void uiSetMouseInformation();
    void uiShowDeviceInformation();

private:
    DeviceMouse * pDeviceMouse;

};

#endif // MYDEVICEUI_H
