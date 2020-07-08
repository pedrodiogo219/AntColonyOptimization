#include "Cidade.h"
using namespace std;

Cidade::Cidade(){
    nome = "sem nome";
    x = 0;
    y = 0;
}
Cidade::Cidade(string n, double _x, double _y){
    nome = n;
    x = _x;
    y = _y;
}
void Cidade::print(){ 
    cout << nome << " - [" << x << ", " << y << "]" << endl; 
}

double Cidade::dist(const Cidade other) const{
    return sqrt( (x - other.x)*(x - other.x) + (y - other.y)*(y - other.y));
}

// um cidade é 'menor' que a outra se sua distancia até (0,0) é menor do que a distancia da outra cidade até (0,0)
bool Cidade::operator<(const Cidade& other){
    Cidade zero = Cidade("", 0, 0);
    return dist(zero) < other.dist(zero);
}