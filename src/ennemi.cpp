#include "../include/ennemi.h"

ennemi::ennemi() 
{
    m_pv = 50;
    m_force = 5;
}

void ennemi::deplacerVersHeros(hero* heros) 
{

    std::array<int, 2> dx = {0, 0};
    std::array<int, 2> herosPos;
    herosPos = (*heros).get_m_pos(); // Récupération position héros

    int delta_x = herosPos[0] - m_pos[0];
    int delta_y = herosPos[0] - m_pos[0];

    if ( delta_x*delta_x > delta_y*delta_y ) 
    { //   Si la longueur horizontale est plus grande que la verticale

        if (delta_x < 0) 
        {
            dx[0] = -1;
        }
        else 
        {
            dx[0] = 1;
        }

    }
    else 
    {

        if (delta_y < 0) 
        {
            dx[1] = -1;
        }
        else 
        {
            dx[1] = 1;
        }
    }

    deplacer(dx);
}