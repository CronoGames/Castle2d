/*
 * © 2024 CronoGames. All rights reserved.
 */

#include "win32_app.h"

win32_app::win32_app( const std::string& commandLine )
:
    wnd( 1280,720,"Game window" ),
	commandLine( commandLine )
{
    //
}

win32_app::~win32_app()
{

}

int32 win32_app::Start()
{
    while( bIsRunning )
	{
        if( const auto ecode = win32_window::ProcessMessages() )
		{
			// if return optional has value, means we're quitting so return exit code
			return *ecode;
		}

        // execute the game logic
		const float dt = timer.Mark() * speed_factor;
        HandleInput(dt);
        Tick(dt);       
    }
    return{-1};
}

void win32_app::Tick(float dt)
{
    
}

void win32_app::HandleInput(float dt)
{

}