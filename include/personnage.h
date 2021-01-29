#pragma once
#include <iostream>
#include <string>
#include <array>

class personnage {

public:

    personnage();

    bool get_m_mort();

    std::array<int, 2> get_m_pos();

    void recevoir_degats(int degats);

    void attaquer(personnage* cible);

    void deplacer(std::array<int, 2> dx);

protected:

uint8_t m_pv; //    Points de vie
uint8_t m_force; // Puissance personnage     
std::array<int, 2> m_pos;  //     Position
bool m_mort; //    Vivant ou mort

};