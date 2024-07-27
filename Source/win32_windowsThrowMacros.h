#ifndef WIN32WINDOWSTHROWMACROS_H
#define WIN32WINDOWSTHROWMACROS_H
/*
 * © 2024 CronoGames. All rights reserved.
 */

#define CHWND_EXCEPT( hr ) win32_window::HrException( __LINE__,__FILE__,(hr) )
#define CHWND_LAST_EXCEPT() win32_window::HrException( __LINE__,__FILE__,GetLastError() )
#define CHWND_NOGFX_EXCEPT() win32_window::NoGfxException( __LINE__,__FILE__ )

#endif