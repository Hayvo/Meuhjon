#pragma once
#include <iostream>
#include <string>

class personnage {

public:

    personnage();

    bool get_m_mort();

    std::vector<int> get_m_pos();

    void recevoir_degats(int degats);

    void attaquer (personnage* cible);

protected:

uint8_t m_pv; //    Points de vie
uint8_t m_force; // Puissance personnage     
std::vector<int> m_pos;  //     Position
std::string m_name; //    Nom du personnage
bool m_mort; //    Vivant ou mort
};