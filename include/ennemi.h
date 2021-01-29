#include <iostream>
#include "./personnage.h"
#include "./hero.h"
#include "./plateau.h"

class ennemi : public personnage {

public:

<<<<<<< HEAD
    ennemi(std::string nom_perso, uint8_t pv, uint8_t force, std::array<int, 2> pos, piece salle) : personnage(std::string nom_perso, uint8_t pv, uint8_t force, std::array<int, 2> pos), m_piece(salle){};
    
    void deplacerVersHeros(hero* hero);
=======
    ennemi(int pv, int force, plateau bg, piece salle) : personnage(pv,force, bg), m_piece(salle){};

    void placeAlea();
    
    void deplacerVersHeros(hero* heros);
<<<<<<< HEAD
=======
    
>>>>>>> ccaea927f1c6e9a26edda749acd75647c52bbd93
>>>>>>> fcb0b04dc553a5d905a6a0902d0a899f0a0735a8

private:

    piece m_piece;
};