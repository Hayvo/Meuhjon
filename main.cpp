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
        p.level1();
        for(int i = 0; i < p.getNx(); i++)
        {
            for(int j = 0; j < p.getNy(); j++)
            {
                cout << p.bg[i][j];
            }
            cout << " " << endl;
        }
        int n;
        cin >> n;
        p.resetBg();
        for(int i = 0; i < p.getNx(); i++)
        {
            for(int j = 0; j < p.getNy(); j++)
            {
                cout << p.bg[i][j];
            }
            cout << " " << endl;
        }
    return 0;
}