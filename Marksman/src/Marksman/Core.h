#pragma once

#ifdef MK_PLATFORM_WINDOWS
	#ifdef MARKSMAN_BUILD_DLL
		#define MARKSMAN_API __declspec(dllexport)
	#else
		#define MARKSMAN_API __declspec(dllimport)
	#endif
#else
	#error Hazel only supports Windows!
#endif
