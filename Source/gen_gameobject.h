#ifndef GENGAMEOBJECT_H
#define GENGAMEOBJECT_H
/*
 * © 2024 CronoGames. All rights reserved.
 * The most basic object that can be in a scene.
 */

#include "gen_object.h"

class CRO_API gen_gameobject : gen_object
{
private:
    /* data */
public:
    gen_gameobject(/* args */);
    ~gen_gameobject();
    virtual void Start() override {}
    virtual void Tick(float deltaTime) override {}
};

#endif