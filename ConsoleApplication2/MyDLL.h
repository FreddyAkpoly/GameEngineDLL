#ifndef __MAIN_H__
#define __MAIN_H__

#define DLL_EXPORT __declspec(dllimport)

#ifdef __cplusplus
extern "C"
{
	void DLL_EXPORT SayHello(const LPCSTR sometext);
	
#endif

#endif // __MAIN_H__