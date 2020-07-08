#include<bits/stdc++.h>

#include "Cidade.h"
#include "Parametros.h"

using namespace std;
#define INF DBL_MAX

Parametros p;

vector<Cidade> bruteForceSolution(){
    vector<Cidade> melhorSolucao;
    
    double best = INF;
    vector<Cidade> solucao = p.cidades;
    Cidade cidadeInicial = solucao[0];

    sort(solucao.begin(), solucao.end());
    cout << "primeira cidade depois que ordenou: " << solucao[0].nome << endl;
    do{
        if(cidadeInicial.nome != solucao[0].nome) continue;

        double valorSolucao = p.funcaoObjetivo(solucao);
        if(valorSolucao < best){
            best = valorSolucao;
            melhorSolucao = solucao;
        }
    }while(next_permutation(solucao.begin(), solucao.end()));

    return melhorSolucao;
}

int main(){
    p.print();

    vector<Cidade> melhorSolucao = bruteForceSolution();
    cout << "\n\nMELHOR SOLUCAO" << endl;
    cout << "distancia total: " << p.funcaoObjetivo(melhorSolucao) << endl;
    cout << "rota: [" << endl; 
    for( Cidade c: melhorSolucao ){
        c.print();
    }
    cout << "]" << endl;
}