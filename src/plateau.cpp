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

void plateau::level1()
{
   piece piece1;
   piece piece2;
   piece couloir;

   piece1.x1 = 2;
   piece1.y1 = 2;
   piece1.x2 = 12;

}