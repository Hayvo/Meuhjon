#pragma once
#include "./personnage.h"
#include <iostream>
#include <vector>
#include <string>
#include "./potion.h"

class hero : public personnage {

public:

    hero(std::array<int, 2> pos):personnage(std::string "héro", uint8_t 150, uint8_t 20, std::array<int, 2> pos){};

    void ajoute_potion(potion potion);

    std::string afficher_inventaire() ;

    void choisir_inventaire(std::string name); // applique la methode recevoir potion de la classe potion

protected:

    std::vector<potion> m_inventaire;
};