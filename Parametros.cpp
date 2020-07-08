#include "Parametros.h"
using namespace std;

Parametros::Parametros(){
    cidades.push_back( Cidade("A", 2.17, 2.91) );
    cidades.push_back( Cidade("B", 3.74, 4.51) );
    cidades.push_back( Cidade("C", 5.16, 2.67) );
    cidades.push_back( Cidade("D", 3.66, 1.62) );
    cidades.push_back( Cidade("E", 3.25, 3.45) );
}

void Parametros::print(){
    cout << "Parametros:" << endl;
    cout << "cidades: [" << endl;
    for( Cidade c: cidades ){
        c.print();
    }
    cout << "]" << endl;
}

double Parametros::funcaoObjetivo(vector<Cidade> v){
    double totalDist = 0;
    for(int i = 1; i < v.size(); i++){
        totalDist += v[i].dist(v[i-1]);
    }

    totalDist += v[v.size()-1 ].dist(v[0]);
    return totalDist;
}