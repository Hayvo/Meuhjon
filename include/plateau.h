#pragma once

#include <stdlib.h>
#include <vector>
#include <iostream>
using namespace std;


class plateau
{
    private:
        static const int nx = 20;
        static const int ny = 20;
        


    public:
        int bg[20][20] = {0};
        int getNx();
        int getNy();

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


class couloir : public piece
{
   private:
        char type;
};