#pragma once
#include <iostream>
#include <string>
#include <array>

class personnage {

public:

    personnage();
    personnage(int pv, int force);

    bool get_m_mort();

    std::array<int, 2> get_m_pos();

    void recevoir_degats(int degats);

    void rajoute_vie(int bonus);

    void rajoute_force(int bonus);

    void attaquer(personnage &cible);

    void deplacer(std::array<int, 2> dx);

protected:

    int m_pv; //    Points de vie
    int m_force; // Puissance personnage     
    std::array<int, 2> m_pos;  //     Position
    bool m_mort; //    Vivant ou mort

};