#include "../include/heros.h" 


heros::heros(){
    m_inventaire = std::vector<potion> ;
}

void heros::ajoute_potion(potion potion){
    m_inventaire.push_back(potion);
}

std::string heros::afficher_inventaire(){
    std::string inv;
    for (int i = 0; i<m_inventaire.size(); i++){ //rajouter une methode size ?
        inv += m_inventaire[i].get_name() ;
        inv += ", " ;
    }
}

void heros::choisir_inventaire(std::string name){
    for (int i=0; i<m_inventaire.size(); i++){
        std::string nom_potion = m_inventaire[i].get_name();
        if (nom_potion == name){
            m_inventaire[i].recevoir_potion(heros);
        }
    }
}
