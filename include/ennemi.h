#include <iostream>
#include "./personnage.h"

class ennemi : public personnage {

public:

    ennemi();

    void deplacerAlea();
};