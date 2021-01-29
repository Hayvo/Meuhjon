#include "../include/potion.h" 


potion::potion(std::string nom_potion, uint8_t ajout_pv, uint8_t ajout_force) : m_ajout_pv(ajout_pv), m_ajout_force(ajout_force), m_name(nom_potion){

}

std::string potion::get_name(){
    return m_name;
}

void potion::recevoir_potion(personnage perso){

}