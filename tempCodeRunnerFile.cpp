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
      case 1: { // tambah
          double a, b;
          cout << "Masukkan a b: ";
          if (!(cin >> a >> b)) { cout << "Input salah.\n"; clearInput(); break; }
          cout << "Hasil: " << (a + b) << "\n";
          break;
      }
      case 2: { // kurang
          double a, b;
          cout << "Masukkan a b: ";
          if (!(cin >> a >> b)) { cout << "Input salah.\n"; clearInput(); break; }
          cout << "Hasil: " << (a - b) << "\n";
          break;
      }
      case 3: { // kali
          double a, b;
          cout << "Masukkan a b: ";
          if (!(cin >> a >> b)) { cout << "Input salah.\n"; clearInput(); break; }
          cout << "Hasil: " << (a * b) << "\n";
          break;
      }
      case 4: { // bagi
          double a, b;
          cout << "Masukkan a b: ";
          if (!(cin >> a >> b)) { cout << "Input salah.\n"; clearInput(); break; }
          if (b == 0) cout << "Error: pembagian dengan 0.\n";
          else cout << "Hasil: " << (a / b) << "\n";
          break;
      }

      case 5: { // modulus (integer)
          int a, b;
          cout << "Masukkan a b (integer): ";
          if (!(cin >> a >> b)) { cout << "Input salah.\n"; clearInput(); break; }
          if (b == 0) cout << "Error: modulo dengan 0.\n";
          else cout << "Hasil: " << (a % b) << "\n";
          break;
      }

      case 6: { // pangkat a^b
          double a, b;
          cout << "Masukkan a b (a^b): ";
          if (!(cin >> a >> b)) { cout << "Input salah.\n"; clearInput(); break; }
          cout << "Hasil: " << pow(a, b) << "\n";
          break;
      }

      case 7: { // akar sqrt(a)
          double a;
          cout << "Masukkan a: ";
          if (!(cin >> a)) { cout << "Input salah.\n"; clearInput(); break; }
          if (a < 0) cout << "Error: akar dari bilangan negatif (real) tidak bisa.\n";
          else cout << "Hasil: " << sqrt(a) << "\n";
          break;
      }

      case 8: { // persen: a% dari b
          double a, b;
          cout << "Masukkan a b (a% dari b): ";
          if (!(cin >> a >> b)) { cout << "Input salah.\n"; clearInput(); break; }
          cout << "Hasil: " << (a / 100.0) * b << "\n";
          break;
      }

      case 9: { // faktorial n!
          int n;
          cout << "Masukkan n (0-12 aman untuk int): ";
          if (!(cin >> n)) { cout << "Input salah.\n"; clearInput(); break; }

          if (n < 0) {
              cout << "Error: faktorial tidak untuk negatif.\n";
              break;
          }

          long long fact = 1;
          for (int i = 2; i <= n; i++) fact *= i;

          cout << "Hasil: " << fact << "\n";
          break;
      }

      default:
          cout << "Pilihan ga valid.\n";
  }
  }
  return 0;
}
