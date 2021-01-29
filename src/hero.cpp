#include "../include/hero.h" 




void hero::ajoute_potion(potion potion)
{
    m_inventaire.push_back(potion);
}

std::string hero::afficher_inventaire()
{
    std::string inv;
    for (int i = 0; i<m_inventaire.size(); i++){
        inv += m_inventaire[i].get_name() ;
        inv += ", " ;
    }

    return inv;
}

void hero::choisir_inventaire(std::string name)
{
    for (int i=0; i<m_inventaire.size(); i++)
    {
        std::string nom_potion = m_inventaire[i].get_name();
        if (nom_potion == name)
        {
            m_inventaire[i].recevoir_potion(this);
        }
    }
}
