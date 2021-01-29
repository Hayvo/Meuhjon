#pragma once
#include <iostream>

class personnage {

public:

    personnage();

    void recevoir_degats(int degats);

    void attaquer (personnage &cible);

    bool est_vivant();

protected:

uint8_t m_pv; //    Points de vie
uint8_t m_force; // Puissance personnage     
int pos[2];  //     Position
};