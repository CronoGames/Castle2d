#ifndef CROHEADER_H
#define CROHEADER_H
/*
 * Copyright © 2024 CronoGames. All rights reserved.
 * Basic header files i use in most files
 */

#include "CroTypes.h"
#include "CroMath.h"
#include "CroTimer.h"

#if CRO_DLL
    #define CRO_API __declspec(dllexport)
#else
    #define CRO_API __declspec(dllimport)
#endif

#endif