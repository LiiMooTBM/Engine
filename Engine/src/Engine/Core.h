#pragma once
#ifdef  HZ_PLATFORM_WINDOWS
	#ifdef HZ_BUILD_DLL
		#define ENGINE_API __declspec(dllexport)
	#else
		#define ENGINE_API __declspec(dllimport)
	#endif // HZ_BUILD_DLL
#else
	#error Engine does only support Windows!
#endif //  HZ_PLATFORM_WINDOWS
