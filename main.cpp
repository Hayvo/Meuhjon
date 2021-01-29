#include <iostream>
#include "./include/plateau.h"
#include "./include/display.h"


using namespace std;
int main() {
    displayer disp;
    plateau p;
    p.level1();
    disp.display(p);
    return 0;
}