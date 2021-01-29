#include <iostream>
#include "./personnage.h"
#include "./hero.h"

class ennemi : public personnage {

public:

    ennemi(int pv, int force, piece salle) : personnage(pv,force), m_piece(salle){};
    
    void deplacerVersHeros(heros* heros);

private:

    piece m_piece;
};