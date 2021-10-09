#include <iostream>
#include <cmath>
#include <math.h>


using namespace std;

void calcularRadio(vol) {
  float radio = 4 / 3 * 3.14 / vol;
  radio = pow(radio, 0.3333333);
  return radio;
}

void calcularAltura(vol, rad) {
  float altura = 3.14 * rad * rad / vol;    
  return altura;    
}

void derivarRadAlt() { 
    
}

void calcularSuperficieMinima() { 
    
}

int main() {
    //recibir el volumen ----
    std::cout << "Introduzca el volumen de su figura: " << std::endl;
    std::cin >> volmn;
    float rad = calcularRadio(volmn)
    float alt = calcularAltura(volm, rad)
    
    return 0;
}
