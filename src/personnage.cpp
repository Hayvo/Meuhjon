#include "../include/personnage.h"

bool personnage::get_m_mort() {
    return m_mort;
}

std::vector<int> personnage::get_m_pos() {
    return pos;
}

personnage::personnage(std::string name) { //   Initialisation des attributs

    m_pv = 100;
    m_force = 5;
    m_pos[0] = 0; m_pos[1] = 0;
    m_mort = false;
}

void personnage::attaquer(personnage* cible) {

    int degats;
    degats = force; //  Calcul des dégats
    cible.recevoir_degats(degats);
}

void personnage::recevoir_degats(int degats) {
    
    if (degats > pv) { //   Si estocade
        m_pv = 0;
        m_mort = true; //   Personnage mort
    }
    else { //  Sinon reçoit les dégats
        m_pv -= degats;
    }
}

void personnage::deplacer(std::vector<int> dx) {

    if ( (dx[0] < -1) and (dx[0] > 1) and (dx[1] < -1) and (dx[1] > 1) ) { //   Vérification de la convention

        new_x = pos[0] + dx[0]; //  Actualisation coordonnées
        new_y = pos[1] + dx[1];

        if ( ??? ) { // Si déplacement possible
            pos[0] = new_x;
            pos[1] = new_y;
        }
    }
    else {
        std::cerr << "Problème dans la convention de déplacement !" << std::endl;
    }
}