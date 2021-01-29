#pragma once
#include <iostream>
#include <string>
<<<<<<< HEAD
#include <vector>

using namespace std;
=======
#include <array>
>>>>>>> 1c04ca80a9a9b6ee8d19166d8e7cc5a0deea7609

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