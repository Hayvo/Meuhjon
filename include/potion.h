#pragma once
#include <iostream>
#include "./personnage.h"
#include "./plateau.h"

class hero;

class potion {

public:

    potion(std::string nom_potion, int ajout_pv, int ajout_force, plateau m_bg, piece m_piece);

    std::string get_name();

    void recevoir_potion(hero* phero);

private:

    int m_ajout_pv; //    Points de vie
    int m_ajout_force; // Puissance personnage
    std::string m_name;
    plateau m_bg;
    piece m_piece;
};