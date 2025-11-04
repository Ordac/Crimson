#pragma once

#ifdef CR_PLATFORM_WINDOWS
	#ifdef CR_BUILD_DLL
		#define CRIMSON_API __declspec(dllexport)
	#else
		#define CRIMSON_API __declspec(dllimport)
	#endif
#else
	#error Crimson only supports Windows!
#endif