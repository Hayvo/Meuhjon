#include <iostream>
#include "./personnage.h"
#include "./hero.h"
#include "./plateau.h"

class ennemi : public personnage {

public:

    ennemi(int pv, int force, plateau bg, piece salle) : personnage(pv,force, bg), m_piece(salle){};

    void placeAlea();
    
    void deplacerVersHeros(hero* heros);
    

private:

    piece m_piece;
};