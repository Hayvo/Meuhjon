#include <iostream>
#include "./personnage.h"
#include "./heros.h"

class ennemi : public personnage {

public:

    ennemi();

    void deplacerVersHeros(heros* heros);
};