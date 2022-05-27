#include <iostream>
#include <cmath>

using namespace std;

class SatuAngka{
  public:
    double angka;

    SatuAngka(){
      cout << "Masukkan angka: ";
      cin >> angka;
      cout << "Hasil: ";
    }

    double getSinus(){
      return sin(angka);
    }

    double getCosinus(){
      return cos(angka);
    }

    double getTangen(){
      return tan(angka);
    }

    double getInversSinus(){
      return asin(angka);
    }

    double getInversCosinus(){
      return acos(angka);
    }

    double getInversTangen(){
      return atan(angka);
    }

    double getPangkatKuadrat(){
      return pow(angka,2);
    }

    double getAkarKuadrat(){
      return sqrt(angka);
    }

    double getEksponen(){
      return exp(angka);
    }
   
};