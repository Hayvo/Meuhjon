#include <iostream>
#include "./include/plateau.h"

using namespace std;
int main() {

    std::srand(time(0)); //  Attribution d'une seed pour la génération aléatoire

    //Fonction de boucle de jeu

        //Inputs

        //Traitement

        //Actualisation

        //Affichage

        //Test fin de jeu
    
        plateau p;

    p.f_piece( 2, 6, 3, 8);
    p.f_couloir('h', 5, 8, 12);
    for (int i = 0 ; i < 20 ; i++)
    {
        for (int j = 0 ; j < 20 ; j++)
        {
            cout<<p.getCase(i,j);
        }
        cout<<endl;
    }

    return 0;
}