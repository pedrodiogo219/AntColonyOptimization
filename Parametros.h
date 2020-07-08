#ifndef PARAMETROSH_INCLUDED
#define PARAMETROSH_INCLUDED

#include<bits/stdc++.h>

#include "Cidade.h"
using namespace std;

class Parametros{
    public:
        vector<Cidade> cidades;

        double funcaoObjetivo(vector<Cidade>);

        Parametros();
        void print();
};

#endif