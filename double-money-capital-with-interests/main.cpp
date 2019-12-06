#include "kapital.h"
#include <iostream>

int main() {

  for (int i = 0; i < 2; i++) {
    int zinssatz{0};
    int kapital{0};
    std::cout << "Bitte das Anfangskapital eingeben" << std::endl;
    std::cin >> kapital;
    std::cout << "Bitte Zinssatz Festlegen" << std::endl;
    std::cin >> zinssatz;
    std::cout << "Kapital vor Rechnung: " << kapital << std::endl
              << "Zinssatz: " << zinssatz << std::endl;
    std::string nochmal{};
    std::string yes{"y"};
    Kapital_rechner *rechner = new Kapital_rechner(zinssatz, kapital);
    std::cout << "Kapital nach Rechnung: " << rechner->_kapital << std::endl
              << "Zinssatz: " << rechner->_zinssatz << std::endl;
    std::cout << "Nochmal? y/n" << std::endl;
    std::cin >> nochmal;
    if (nochmal == yes) {
      i = 0;
      std::cout << "viel spaß" << std::endl;
      delete rechner;
      rechner = nullptr;
    } else {
      i = 1;
    }
  }
}
/*
Kn=K0*(1+p)^n

K=K*(1+p)

Variablen:
zinssatz
kapital

gesucht:

n

K=K*p



////
Kn/K0=(1+p)^n
lg(Kn/K0)=lg((1+p)^n)
lg(Kn/K0)/lg(1+p)=n

*/