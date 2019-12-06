#include "kapital.h"
#include <iostream>

Kapital_rechner::Kapital_rechner(int zinssatz, double kapital)
    : _zinssatz(zinssatz), _kapital(kapital) {
  int k{100};
  double kapital_ziehl{0};
  kapital_ziehl = _kapital * 2;
  std::cout << "kapital_ziel: " << kapital_ziehl << std::endl;
  std::cout << "_kapital: " << _kapital << std::endl;
  for (int i = 0; i < k; i++) {
    _kapital = _kapital * (1 + (_zinssatz / 100));
    if (_kapital >= kapital_ziehl) {
      k = i;
      std::cout << "Nach " << k << " Jahren wurde der Betrag verdoppelt!"
                << std::endl;
    }
  }
}