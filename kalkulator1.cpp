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
      default:
        cout << "Pilihan ga valid\n";
    }
  }
  return 0;
}
