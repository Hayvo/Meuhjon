#include <iostream>
#include "./personnage.h"
#include "./hero.h"
#include "./plateau.h"

class ennemi : public personnage {

public:

    ennemi(std::string nom_perso, uint8_t pv, uint8_t force, std::array<int, 2> pos, piece salle) : personnage(std::string nom_perso, uint8_t pv, uint8_t force, std::array<int, 2> pos), m_piece(salle){};
    
    void deplacerVersHeros(hero* hero);

private:

    piece m_piece;
};