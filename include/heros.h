#pragma once
#include "./personnage.h"
#include <iostream>
#include <vector>
#include <string>
#include "./potion.h""

class heros : public personnage {

public:

    heros() ;
    void initialise_inventaire() ;
    void ajoute_potion() ;
    void afficher_invetaire() ;
    void choisir_inventaire(); // applique la methode recevoir potion de la classe potion




protected:
    std::vector<potion> m_inventaire ;
};