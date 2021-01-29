#pragma once
#include "./personnage.h"
#include <iostream>
#include <vector>
#include <string>
#include "./potion.h"

class heros : public personnage {

public:

    heros() ;

    void ajoute_potion(potion potion) ;

    std::string afficher_inventaire() ;

    void choisir_inventaire(std::string name); // applique la methode recevoir potion de la classe potion

protected:

    std::vector<potion> m_inventaire;
};