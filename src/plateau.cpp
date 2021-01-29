#include "../include/plateau.h"

/*int plateau::getNx()
{
    return nx;
}

int plateau::getNy()
{
    return ny;
}

void piece::setX1(int i)
{
    x1 = i;
}

void piece::setX2(int i)
{
    x2 = i;
}
void piece::setY1(int i)
{
    y1 = i;
}
void piece::setY2(int i)
{
    y2 = i;
}


int piece::getX1()
{
    return x1;
}

int piece::getY1()
{
    return y1;
}

int piece::getX2()
{
    return x2;
}

int piece::getY2()
{
    return y2;
}


void plateau::level1()
{
   piece piece1;
   piece piece2;
   couloir couloir1;

   piece1.setX1(2);
   piece1.setY1(2);
   piece1.setX2(12);
   piece1.setY2(7);

   couloir1.setX1(6);
   couloir1.setY1(7);
   couloir1.setX2(6);
   couloir1.setY2(11);

   piece2.setX1(4);
   piece2.setY1(11);
   piece2.setX2(12);
   piece2.setY2(19);
}*/

void plateau::f_couloir(char h_or_v, int c, int u1, int u2)
// h_or_v indique si le couloir est horizontal ou vertical, u1 et u2 le début et la fin du couloir sur la coordonnée dynamique du couloir (y pour horizontale)
{
    int hv = h_or_v;
    int h = 'h';
    int v = 'v';
    if (hv = h)
    {
        //Portes
        bg[c][u1] = porte;
        bg[c][u2] = porte;

        //Couloirs
        for (int i = u1 + 1 ; i < u2 ; i++)
        {
            bg[c][i] = couloir;
        }
    }
    if (hv == v)
    {
        //Portes
        bg[u1][c] = porte;
        bg[u2][c] = porte;

        //Couloirs
        for (int i = u1 + 1 ; u1 < u2 ; i++)
        {
            bg[i][c] = couloir;
        }
    }
}

void plateau::f_piece(int x_gauche, int x_droit, int y_haut, int y_bas)
// Les variables d'entrée correspondent aux coins formés par les murs
{
    for (int i = x_gauche ; i <= x_droit ; i++)
    {
        for (int j = y_haut ; j <= y_bas ; j++)
        {
            if (i == x_gauche or i == x_droit or j == y_haut or j == y_bas)
            {
                bg[i][j] = mur;
            }
            else
            {
                bg[i][j] = piece;
            }
        }
    }
}

int plateau::getCase(int i, int j)
{
    int res = bg[i][j];
    return res;
}