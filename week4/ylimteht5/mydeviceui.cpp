#include "mydeviceui.h"

myDeviceUI::myDeviceUI()
{
    pDeviceMouse = new DeviceMouse();
}

myDeviceUI::~myDeviceUI()
{
    delete pDeviceMouse;
    pDeviceMouse = nullptr;
}

void myDeviceUI::uiShowMenu()
{
    short menuitem = 0;
    while(menuitem != 5)
    {
        cout << "DEVICE MENU"<<endl;
        cout << "============="<< endl;
        cout << "1: Set mouse Information " << endl;
        cout << "2: Set touch pad Information " << endl;
        cout << "3: Set display Information " << endl;
        cout << "4: Show devices Information " << endl;
        cout << "5: Finish " << endl;
        cout << endl;
        cout << "choose"<< endl;
        cin >> menuitem;
        switch(menuitem)
        {
            case 1:
                uiSetMouseInformation();
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                uiShowDeviceInformation();
                break;
            default:
                break;
        }
     }
}

void myDeviceUI::uiSetMouseInformation()
{
    cout << " Set Mouse Device ID:" << endl;
    pDeviceMouse->setDeviceID();

    cout << " Set Mouse Primary Button:" << endl;
    pDeviceMouse->setPrimaryButton();

}

void myDeviceUI::uiShowDeviceInformation()
{
    cout << "Mouse device ID = " << pDeviceMouse->getDeviceID() << endl;
    cout << "Mouse primary buttoon = " << pDeviceMouse->getPrimaryButton() << endl;
}
