#pragma once

#include <stdlib.h>
#include <iostream>

using namespace std;

class piece
{
    public:
    piece(){};
    piece (const piece &p)
    {
        x1 = p.x1;
        x2 = p.x2;
        y1 = p.y1;
        y2 = p.y2;

    }
    protected:
        int x1;
        int x2;
        int y1;
        int y2;

    public:
        void setX1(int i);
        void setX2(int i);
        void setY1(int i);
        void setY2(int i);

        int getX1();
        int getX2();
        int getY1();
        int getY2();
};


class couloir
{
    private:
        int c;
        int u1;
        int u2;
        char type;

    public:
        void setC(int c_);
        void setU1(int u1_);
        void setU2(int u2_);
        void setType(char t);

        char getType();
        int getU1();
        int getU2();
        int getC();

};

class plateau
{
    private:
        static const int nx = 20;
        static const int ny = 20;

    public:
    void f_piece(piece room);
    void f_couloir(couloir corridor);

    private:
        int tag_vide = 0;
        int tag_mur = 1;
        int tag_piece = 2;
        int tag_couloir = 3;
        int tag_porte = 4;

    public:
        int bg[nx][ny] = {0};
        int getNx();
        int getNy();
        int getCase(int i, int j);

        void setBgTest();
        void setCase(int i, int j, int p);

        void level1();
        void level2();
        void level3();

        void resetBg();

};

