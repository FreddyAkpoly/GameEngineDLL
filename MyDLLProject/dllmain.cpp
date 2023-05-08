// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"
#include "DLLHeader.h"
#ifdef _MANAGED
#pragma managed(push,off)
#endif
BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    return TRUE;
}

void DLL_EXPORT SayHello(const LPCSTR Text) {
    MessageBoxA(NULL,Text,"DLL Text",MB_OK);
}


#ifdef _MANAGED
#pragma managed(pop)
#endif // _MANAGED

