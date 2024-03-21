#include <iostream>
#include "Data.h"
using namespace std;
// Sobrecarga do operador de extra��o para ler uma data
istream& operator>>(istream& in, Data& data) {
    in >> data.dia;
    cin.get();
    in >> data.mes;
    cin.get();
    in >> data.ano;

    return in;
}

// Sobrecarga do operador de inser��o para exibir uma data
ostream& operator<<(ostream& out, const Data& data) {
    out << data.dia << "/" << data.mes << "/" << data.ano;
    return out;
}