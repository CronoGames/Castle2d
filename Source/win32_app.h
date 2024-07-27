#ifndef WIN32APP_H
#define WIN32APP_H
/*
 * © 2024 CronoGames. All rights reserved.
 */

#include "CroHeader.h"
#include "win32_window.h"

class win32_app
{
    private:
        CroTimer timer;
	    float speed_factor = 1.0f;
        bool32 bIsRunning{1};
        std::string commandLine;
        win32_window wnd;
    public:
	    win32_app( const std::string& commandLine = "" );
	    // master frame / message loop
	    int32 Start();
	    ~win32_app();
    private:
        void Tick( float dt );
	    void HandleInput( float dt );
};

#endif