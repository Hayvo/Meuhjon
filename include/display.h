#pragma once
#include "./plateau.h"
#include "./potion.h"
#include "./hero.h"
#include "./ennemi.h"
#include "./personnage.h"



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
            YELLOW = 5,
        };

    public:
        void display_bg(plateau p);
        void display_ennemi(ennemi e);
        void display_hero(hero h);
        void display_potion(potion p);

        void remove_ennemi(ennemi e);
        void remove_hero(hero h);
        void remove_potion(potion p);

        void init_color();
        void init();
};