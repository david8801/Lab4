//test1
#include <iostream>
#include "juicer.h"
#include <string>

using namespace std;

int main() {
    cout << "Roshen Juicer "<<endl;
    juicer juicerObject1 (120, 6);
    juicer juicerObject2 ("nice", 120);
    juicer juicerObject3 (400, "RED", 100, "roshen");
    cout << endl;
    cout << "milka Juicer" << endl;
    juicer juicerObject4 (200, 10);
    juicer juicerObject5 ("perfect", 1020);
    juicer juicerObject6 (2500, "blue", 120, "milka");
    cout << endl;
    cout << "milenium Juicer" <<endl;
    juicer juicerObject7 (80, 4);
    juicer juicerObject8 ("medium", 400);
    juicer juicerObject9 (100, "yellow", 150, "milenium");
    return 0;

}