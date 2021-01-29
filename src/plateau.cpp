#include "../include/plateau.h"

int plateau::getNx()
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
}

