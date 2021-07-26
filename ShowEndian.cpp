#include <Windows.h>


#pragma comment(lib, "Ws2_32.lib")


INT WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR lpCmdLine, INT nCmdShow)
{
    if (htonl(47) == 47)
        MessageBox(NULL, "System is big endian", "Info", MB_OK);
    else
        MessageBox(NULL, "System is little endian", "Info", MB_OK);

    return 0;
}
