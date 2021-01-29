#include <iostream>
#include "./personnage.h"
#include "./hero.h"

class ennemi : public personnage {

public:

    ennemi();

    void deplacerVersHeros(hero* heros);
};