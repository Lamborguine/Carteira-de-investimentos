#pragma once
#include <iostream>
using namespace std;

struct Data {
    int dia;
    int mes;
    int ano;
};

istream& operator>>(istream& in, Data& data); //Lê data
ostream& operator<<(ostream& out, const Data& data); // Exibe data