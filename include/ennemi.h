#pragma once 

#include <iostream>
#include "./personnage.h"
#include "./hero.h"
#include "./plateau.h"

class ennemi : public personnage {

private:
    piece m_piece;
public:
    ennemi(int pv, int force, std::array<int, 2> pos, plateau bg, piece salle) : personnage(pv,force,pos,bg), m_piece(salle){};

    void placeAlea();
    
    void deplacerVersHeros(hero* heros);

};