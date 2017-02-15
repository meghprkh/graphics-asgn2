#ifndef LIFE_H
#define LIFE_H

#include "heart.h"

class Life
{
public:
    Life();
    void init();
    void draw();
    bool decrease();
private:
    int life;
    Heart hearts[5];
};

#endif // LIFE_H
