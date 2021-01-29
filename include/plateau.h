#pragma once

#include <stdlib.h>
#include <iostream>

using namespace std;


class plateau
{
    private:
        static const int nx = 20;
        static const int ny = 20;

    public:
    void f_piece(int x_gauche, int x_droit, int y_haut, int y_bas);
    void f_couloir(char h_or_v, int c, int u1, int u2);

    private:
        int vide = 0;
        int mur = 1;
        int piece = 2;
        int couloir = 3;
        int porte = 4;

    public:
        int bg[nx][ny] = {0};
        int getNx();
        int getNy();
        int getCase(int i, int j);

        void setBgTest();

        void level1();
        void level2();
        void level3();

};

class piece
{
    protected:
        int x1;
        int x2;
        int y1;
        int y2;

/*    public:
        void setX1(int i);
        void setX2(int i);
        void setY1(int i);
        void setY2(int i);

        int getX1();
        int getX2();
        int getY1();
        int getY2();*/
};


class couloir : public piece
{
   private:
        char type;
};