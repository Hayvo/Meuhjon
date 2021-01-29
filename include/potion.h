#pragma once
#include <iostream>
#include "./personnage.h"

class potion {

public:

    potion();

    void recevoir_potion(personnage &perso);

private:

uint8_t m_aujout_pv; //    Points de vie
uint8_t m_ajout_force; // Puissance personnage
};