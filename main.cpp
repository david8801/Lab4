//test1
#include <iostream>
#include "juicer.h"
#include <string>

using namespace std;

int main() {
    cout << "Roshen Juicer "<<endl;
    juicer juicerObj1 (120, 6);
    juicer juicerObj2 ("nice", 120);
    juicer juicerObj3 (400, "RED", 100, "roshen");
    cout << endl;
    cout << "milka Juicer" << endl;
    juicer juicerObj4 (200, 10);
    juicer juicerObj5 ("perfect", 1020);
    juicer juicerObj6 (2500, "blue", 120, "milka");
    cout << endl;
    cout << "milenium Juicer" <<endl;
    juicer juicerObj7 (80, 4);
    juicer juicerObj8 ("medium", 400);
    juicer juicerObj9 (100, "yellow", 150, "milenium");
    return 0;

}