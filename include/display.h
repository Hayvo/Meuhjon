#pragma once
#include "./plateau.h"


class displayer
{
    public:
        enum COLOR
        {
            BLACK = 0,
            RED = 1,
            BLUE = 2,
            GREEN = 3,
            CYAN = 4,
            YELLOW = 5
        };

    public:
        void display(plateau p);
        void init_color();
        void init();
};