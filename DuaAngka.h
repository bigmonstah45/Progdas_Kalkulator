#include <iostream>
#include <cmath>

using namespace std;

class DuaAngka{
  public:
    double angka1;
    double angka2;

    DuaAngka(){
      cout << "Masukkan angka pertama: ";
      cin >> angka1;
      cout << "Masukkan angka kedua: ";
      cin >> angka2;
      cout << "Hasil: ";
    }

    double getHasilTambah(){
      return angka1+angka2;
    }

    double getHasilKurang(){
      return angka1+angka2;
    }

    double getHasilKali(){
      return angka1*angka2;
    }

    double getHasilBagi(){
      return angka1/angka2;
    }

    double getHasilPangkat(){
      return pow(angka1,angka2);
    }

};