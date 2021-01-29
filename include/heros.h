#pragma once
#include "./personnage.h"
#include <iostream>
#include <vector>
#include <string>
#include "./potion.h""

class heros : public personnage {

public:

<<<<<<< HEAD
    heros() ;
    void initialise_inventaire() ;
    void ajoute_potion() ;
    void afficher_invetaire() ;
    void choisir_inventaire(); // applique la methode recevoir potion de la classe potion




protected:
    std::vector<potion> m_inventaire ;
=======
    heros();


protected:

>>>>>>> 8c250fed36ea99a7612ce67b77801ef21647f10d
};