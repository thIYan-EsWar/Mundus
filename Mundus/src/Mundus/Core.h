#pragma once

#ifdef MN_PLATFORM_WINDOWS
	#ifdef MN_BUILD_DLL
		#define MUNDUS_API __declspec(dllexport)
	#else
		#define MUNDUS_API __declspec(dllimport)
	#endif // MN_BUILD_DLL

#else
	#error Mundus only build on a Windows platform

#endif // MN_PLATFORM_WINDOWS
