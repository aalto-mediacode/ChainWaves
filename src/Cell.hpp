#pragma once

#include "ofMain.h"

class Cell{

    public:
        void setup();
        void update();
        void draw(float x, float y, float noise, float size, float speed);
};
