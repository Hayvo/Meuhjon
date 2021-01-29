#pragma once

#include <stdlib.h>
#include <vector>

using namespace std;


class plateau
{
    private:
        static const int nx = 20;
        static const int ny = 20;
        int bg[20][20];

    public:
        int getNx();
        int getNy();
        int getBg();

        void level1();
        void level2();
        void level3();

};