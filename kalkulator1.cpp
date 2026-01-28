#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

//bersihkan input kalo salah
void clearInput() {
  cin.clear();
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void showMenu() {
  cout << "\n=== Kalkulator Sederhana ===\n";
  cout << "1. Penjumlahan\n";
  cout << "2. Pengurangan\n";
  cout << "3. Perkalian\n";
  cout << "4. Pembagian\n";
  cout << "5. Modulus[%]\n";
  cout << "6. Pangkat\n";
  cout << "7. Akar (sqrt)\n";
  cout << "8. Persen (a% b) \n";
  cout << "9. Faktorial (n!)\n";
  cout << "0. Keluar\n";
  cout << "Pilih Operasi (0-9): ";
}

int main()
{
  int pilih;

  while (true) {
    showMenu();

    if (!(cin >> pilih)) {
      cout << "Input harus angka\n";
      clearInput();
      continue;
    }

    if (pilih == 0) {
      cout << "Bye. \n";
      break;
    }
    
    switch (pilih) {
      case 1: { //tambah
        double a, b;
        cout << "Masukkan a dan b: ";
        if (!(cin >> a >> b)) {cout << "Input salah,\n"; clearInput(); break; clearInput(); break;}
        cout << "Hasil: " << (a+b) << "\n";
        break;
      }

      case 2: { //kurang
        double a, b;
        cout << "Masukkan a dan b: ";
        if (!(cin >> a >> b)) {cout << "Input salah,\n"; clearInput(); break; clearInput(); break;}
        cout << "Hasil: " << (a-b) << "\n";
        break;
      }
      

      case 3: { //kali
        double a, b;
        cout << "Masukkan a dan b: ";
        if (!(cin >> a >> b)) {cout << "Input salah,\n"; clearInput(); break; clearInput(); break;}
        cout << "Hasil: " << (a*b) << "\n";
        break;
      }
      
      case 4: { //bagi
        double a, b;
        cout << "Masukkan a dan b: ";
        if (!(cin >> a >> b)) {cout << "Input salah,\n"; clearInput(); break; clearInput(); break;}
        
        if (b == 0) {
          cout << "Error: pembagian dengan 0.\n";
        } else {
          cout << "Hasil: " << (a/b) << "\n";
        }
        break;
      }

      case 5: { //modulus
        int a, b;
        cout << "Masukkan a dan b: ";
        if (!(cin >> a >> b)) {cout << "Input salah,\n";clearInput(); break; }
        if (b == 0) cout << "Error: Modulus dengan 0.\n";
        else cout << "Hasil: " << (a % b) << "\n";
        break;
      }
      
      case 6: { //pangkat
        double a, b;
        cout << "Masukkan a dan b: ";
        if (!(cin >> a >> b)) {cout << "Input salah,\n";clearInput(); break; }
        cout << "Hasil: " << pow(a, b) << "\n";
        break;
      }
      
      case 7: { //akar
        double a, b;
        cout << "Masukkan a dan b: ";
        if (!(cin >> a >> b)) {cout << "Input salah,\n";clearInput(); break; }
        if (a < 0 || b < 0) {
          cout << "Error: Akar dari bilangan negatif.\n";
        } else {
          cout << "Hasil: " << sqrt(a) << "\n";
        }
        break;
      }

      default:
        cout << "Pilihan ga valid\n";
    }
  }
  return 0;
}
