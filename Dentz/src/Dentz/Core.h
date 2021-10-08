#pragma once


#ifdef DZ_PLATFORM_WINDOWS

	#ifdef DZ_BUILD_DLL
		#define DENTZ_API __declspec(dllexport)
	#else
		#define DENTZ_API __declspec(dllimport)
	#endif

#else
	#error Dentz only support windows!
#endif