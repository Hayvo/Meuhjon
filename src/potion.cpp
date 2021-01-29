#include "../include/potion.h" 
#include "../include/hero.h"


potion::potion(std::string nom_potion, int ajout_pv, int ajout_force, plateau bg, piece salle) : m_ajout_pv(ajout_pv), m_ajout_force(ajout_force), m_name(nom_potion){

    int x = rand()%(m_piece.getX2() - m_piece.getX1() - 1) + m_piece.getX1() + 1;
    int y = rand()%(m_piece.getY2() - m_piece.getY1() - 1) + m_piece.getY1() + 1;

    if ( positionValide(x, y) ) //  Vérification de non superposition avec d'autres entités
    {
        m_pos[0] = x; m_pos[1] = y;
    }
}

std::string potion::get_name(){
    return m_name;
}

void potion::recevoir_potion(hero* phero){
    phero->rajoute_force(m_ajout_force);
    phero->rajoute_vie(m_ajout_pv);

}