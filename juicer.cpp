//
// Created by david on 23.10.2018.
//test 1

#include "juicer.h"
#include <iostream>
#include <string>
using namespace std;

juicer::juicer(int p,int w):
        price(p),weight(w)
{
    cout <<"The price is " << price  << " dolloars " << endl <<"The weight eqals " << weight << " kg " << endl;
}

juicer::juicer(string q, int u):
        quality(q),users(u)
{
    cout << "The quality is " <<  quality << endl << "There are " << users << " Users" << endl;
}
juicer::juicer(int am,string c,int e,string pr):
        amount(am),color(c),energy(e),prod(pr)
{
    cout << "An amount of available juicers equals " << amount << endl << "the color is "<< color << endl << "An energy usage equals " <<energy << "watt"<< endl <<"The producer is "<< prod << endl;
}

void juicer::setPrice(int p) {
    price = p;
    cout << price;
}

void juicer::getWeight(int w) {
    weight = w;
    cout << weight;
}

juicer::~juicer(){

}