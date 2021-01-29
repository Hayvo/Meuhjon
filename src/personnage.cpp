#include "../include/personnage.h"

bool personnage::get_m_mort() {
    return m_mort;
}

std::array<int, 2> personnage::get_m_pos() {
    return m_pos;
}

personnage::personnage() { //   Initialisation des attributs

    m_pos[0] = 0; m_pos[1] = 0;
    m_mort = false;
}

void personnage::attaquer(personnage* cible) {

    int degats;
    degats = m_force; //  Calcul des dégats
    (*cible).recevoir_degats(degats);
}

void personnage::recevoir_degats(int degats) {
    
    if (degats > m_pv) { //   Si estocade
        m_pv = 0;
        m_mort = true; //   Personnage mort
    }
    else { //  Sinon reçoit les dégats
        m_pv -= degats;
    }
}

void personnage::deplacer(plateau* bg, std::array<int, 2> dx) {

    if ( (dx[0] < -1) and (dx[0] > 1) and (dx[1] < -1) and (dx[1] > 1) ) { //   Vérification de la convention

        int new_x = m_pos[0] + dx[0]; //  Actualisation coordonnées
        int new_y = m_pos[1] + dx[1];

        if ( (*bg).getCase(new_x, new_y) != 1 ) { // Si déplacement possible
            m_pos[0] = new_x;
            m_pos[1] = new_y;
        }
    }
    else {
        std::cerr << "Problème dans la convention de déplacement !" << std::endl;
    }
}