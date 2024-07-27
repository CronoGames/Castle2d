/*
 * Copyright © 2024 CronoGames. All rights reserved.
 */

// All includes vare here
#define NOMINMAX
#define STRICT
#include <Windows.h>
#include "win32_build.h"
#include "win32_app.h"
#include <iostream>


// Main entry point for console programs
int CALLBACK WinMain(HINSTANCE inst, HINSTANCE prevInst, LPSTR cmdLine, int cmdShow)
{
    try
	{
		return win32_app{ cmdLine }.Start();
	}
	catch( const win32_exception& e )
	{
		std::cerr << e.what() << '\n';
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	catch( ... )
	{
		std::cerr << "Unknown Exception" << '\n';
	}
	return{-1};   
}