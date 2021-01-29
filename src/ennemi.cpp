#include "../include/ennemi.h"

ennemi::ennemi() {
    m_pv = 50;
    m_force = 5;
}

void ennemi::deplacerAlea() {

    std::array<int, 2> dx;

    dx[0] = rand()%(1) - rand()%(1);
    dx[0] = rand()%(1) - rand()%(1);    

    ennemi.deplacer(dx);
}