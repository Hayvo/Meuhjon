#pragma once
#include <iostream>
#include "./personnage.h"
#include "./hero.h"
#include "./ennemi.h"
#include "./display.h"
#include "./dialogue.h"
#include "./plateau.h"
#include "./potion.h"



class game {
    public:

    void generation_ennemis();
    void generation_potions();
    void rencontre_ennemi(); // test si il y a un ennemi pas loin et si c'est le cas appelle deplacevershero
    void combat();

    void play();

    private:
    std::vector<ennemi> m_ennemis;
    std::vector<potion> m_potions;




};