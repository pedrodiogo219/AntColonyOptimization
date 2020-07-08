#ifndef CIDADEH_INCLUDED
#define CIDADEH_INCLUDED

#include<bits/stdc++.h>
using namespace std;

class Cidade{ 
    public: 
        double x, y;
        string nome;

        Cidade();
        Cidade(string, double, double);
        void print();
        double dist(Cidade) const;
        bool operator<(const Cidade&);
}; 

#endif