#ifndef GENOBJECT_H
#define GENOBJECT_H
/*
 * © 2024 CronoGames. All rights reserved.
 */

#include "CroHeader.h"

class CRO_API gen_object
{
private:
    /* data */
public:
    gen_object(/* args */);
    ~gen_object();
    virtual void Start(){}
    virtual void Tick(float deltaTime){}
};

#endif