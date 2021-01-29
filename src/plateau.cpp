#include "../include/plateau.h"

int plateau::getNx()
{
    return nx;
}

int plateau::getNy()
{
    return ny;
}

void plateau::resetBg()
{
    for(int i = 0; i < nx; i++)
    {
        for(int j = 0; j < ny; j++)
        {
            bg[i][j] = 0;
        }
    }
}

void plateau::setCase(int i, int j, int p)
{
    bg[i][j] = p;
}

int plateau::getCase(int i, int j)
{
    return bg[i][j];
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

void couloir::setType(char t)
{
    type = t;
}

char couloir::getType()
{
    return type;
}

int couloir::getC()
{
    return c;
}

int couloir::getU1()
{
    return u1;
}

int couloir::getU2()
{
    return u2;
}

void couloir::setC(int c_)
{    
    c = c_;
}

void couloir::setU1(int u1_)
{
    u1 = u1_;
}

void couloir::setU2(int u2_)
{
    u2 = u2_;
}


void plateau::f_couloir(couloir corridor)
// h_or_v indique si le couloir est horizontal ou vertical, u1 et u2 le début et la fin du couloir sur la coordonnée dynamique du couloir (y pour horizontale)
{
    int c = corridor.getC();
    int u1 = corridor.getU1();
    int u2 = corridor.getU2();
    char h_or_v = corridor.getType();

    int hv = h_or_v;
    int h = 'h';
    int v = 'v';
    if (hv == h)
    {
        //Portes
        bg[c][u1] = tag_porte;
        bg[c][u2] = tag_porte;

        //Couloirs
        for (int i = u1 + 1 ; i < u2 ; i++)
        {
            bg[c][i] = tag_couloir;
        }
    }
    if (hv == v)
    {
        //Portes
        bg[u1][c] = tag_porte;
        bg[u2][c] = tag_porte;

        //Couloirs
        for (int i = u1 + 1 ; i < u2 ; i++)
        {
            bg[i][c] = tag_couloir;
        }
    }
}

void plateau::f_piece(piece room)
// Les variables d'entrée correspondent aux coins formés par les murs
{
    int x_gauche = room.getX1();
    int x_droit = room.getX2();
    int y_haut = room.getY1();
    int y_bas = room.getY2();
    for (int i = x_gauche ; i <= x_droit ; i++)
    {
        for (int j = y_haut ; j <= y_bas ; j++)
        {
            if (i == x_gauche or i == x_droit or j == y_haut or j == y_bas)
            {
                bg[i][j] = tag_mur;
            }
            else
            {
                bg[i][j] = tag_piece;
            }
        }
    }
}

void plateau::level1()
{
    resetBg();
    piece piece1;
    piece piece2;
    couloir couloir1;

    piece1.setX1(2);
    piece1.setY1(2);
    piece1.setX2(12);
    piece1.setY2(7);

    couloir1.setC(6);
    couloir1.setU1(7);
    couloir1.setU2(11);
    couloir1.setType('h');

    piece2.setX1(4);
    piece2.setY1(11);
    piece2.setX2(12);
    piece2.setY2(19);

    f_piece(piece1);
    f_piece(piece2);
    f_couloir(couloir1);

}