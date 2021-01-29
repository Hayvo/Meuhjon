#include <iostream>
#include "./personnage.h"
#include "./hero.h"
#include "./plateau.h"

class ennemi : public personnage {

public:

    ennemi(int pv, int force, plateau bg, piece salle) : personnage(pv,force, bg), m_piece(salle){};

    void placeAlea();
    
    void deplacerVersHeros(hero* heros);
<<<<<<< HEAD
=======
    
>>>>>>> ccaea927f1c6e9a26edda749acd75647c52bbd93

private:

    piece m_piece;
};