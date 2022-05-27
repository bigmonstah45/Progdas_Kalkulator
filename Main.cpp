#include <iostream>
#include "SatuAngka.h"
#include "DuaAngka.h"

using namespace std;

int main(int argc, char const *argv[])
{
  short x;
  char i = 'y';
  cout << "Pilih salah satu!\n";
  cout << "1.  Penjumlahan | 8.  Inverse Sinus\n";
  cout << "2.  Pengurangan | 9.  Inverse Cosinus\n";
  cout << "3.  Perkalian   | 10. Inverse Tangen\n";
  cout << "4.  Pembagian   | 11. Pangkat Kuadrat\n";
  cout << "5.  Sinus       | 12. Akar Kuadrat\n";
  cout << "6.  Cosinus     | 13. Pangkat\n";
  cout << "7.  Tangen      | 14. Eksponen\n";

  while (i=='y')
  {
    cout << "\nMasukkan nomor pilihan anda: ";
    cin >> x;
    if (x==1){
    DuaAngka hasil = DuaAngka();
    cout << hasil.getHasilTambah() << endl;
    }
    else if (x==2){
      DuaAngka hasil = DuaAngka();
      cout << hasil.getHasilKurang() << endl;
    }
    else if (x==3){
      DuaAngka hasil = DuaAngka();
      cout << hasil.getHasilKali() << endl;
    }
    else if (x==4){
      DuaAngka hasil = DuaAngka();
      cout << hasil.getHasilBagi() << endl;
    }
    else if (x==5){
      SatuAngka hasil2 = SatuAngka();
      cout << hasil2.getSinus() << endl;
    }
    else if (x==6){
      SatuAngka hasil2 = SatuAngka();
      cout << hasil2.getCosinus() << endl;
    }
    else if (x==7){
      SatuAngka hasil2 = SatuAngka();
      cout << hasil2.getTangen() << endl;
    }
    else if (x==8){
      SatuAngka hasil2 = SatuAngka();
      cout << hasil2.getInversSinus() << endl;
    }
    else if (x==9){
      SatuAngka hasil2 = SatuAngka();
      cout << hasil2.getInversCosinus() << endl;
    }
    else if (x==10){
      SatuAngka hasil2 = SatuAngka();
      cout << hasil2.getInversTangen() << endl;
    }
    else if (x==11){
      SatuAngka hasil2 = SatuAngka();
      cout << hasil2.getPangkatKuadrat() << endl;
    }
    else if (x==12){
      SatuAngka hasil2 = SatuAngka();
      cout << hasil2.getAkarKuadrat() << endl;
    }
    else if (x==13){
      DuaAngka hasil = DuaAngka();
      cout << hasil.getHasilPangkat() << endl;;
    }
    else if (x==14){
      SatuAngka hasil2 = SatuAngka();
      cout << hasil2.getEksponen() << endl;
    }
    else{
      cout << "Tidak ada pilihan\n";
    }

    cout << "\nHitung lagi? (y/n): ";
    cin >> i;

    if (i!='y'){
      break;
    }
  }
  
  return 0;
}
