#pragma once
#include "./personnage.h"
#include <iostream>
#include <vector>
#include <string>
#include "./potion.h"

class hero : public personnage {

public:

    hero(std::array<int, 2> pos, plateau bg):personnage(150, 20, pos, bg){};

    void ajoute_potion(potion potion);

    std::string afficher_inventaire() ;

    void choisir_inventaire(std::string name); // applique la methode recevoir potion de la classe potion

protected:

    std::vector<potion> m_inventaire;
};