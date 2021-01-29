#pragma once
#include <iostream>
#include "./personnage.h"

class hero;

class potion {

public:

    potion(std::string nom_potion, uint8_t ajout_pv, uint8_t ajout_force);

    std::string get_name();

    void recevoir_potion(hero* phero);

private:

uint8_t m_ajout_pv; //    Points de vie
uint8_t m_ajout_force; // Puissance personnage
std::string m_name;

};