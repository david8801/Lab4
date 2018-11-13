//
// Created by david on 23.10.2018.
//
//Test1
#ifndef C_LAB_JUICER_H
#define C_LAB_JUICER_H

#include <iostream>
#include <string>
using namespace std;

class juicer {

public:
    int price;
    int weight;


    juicer(int, int);
    juicer(string , int);
    juicer(int , string, int, string );

    void setPrice(int p);

    void getWeight(int w);

    ~juicer();

private:
    int amount;
    string color;
    int energy;
    string producer;

protected:
    string quality;
    int usersQuantity;
};

#endif //C_LAB_JUICER_H
