#pragma once

#include <stdlib.h>
#include <vector>

using namespace std;


class plateau
{
    private:
        static const int nx = 20;
        static const int ny = 20;
        vector<vector<int>> bg;

    public:
        int getNx();
        int getNy();
        vector<vector<int>> getBg();

        void level1();
        void level2();
        void level3();

};

class piece
{
    int x1;
    int x2;
    int y1;
    int y2;
};

