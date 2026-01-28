#include <iostream>
#include <cmath>
#include <limits>
#include <vector>

using namespace std;

void clearInput() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void showMenu() {
    cout << "\n=== KALKULATOR LENGKAP ===\n";
    cout << "1. Tambah (+)\n";
    cout << "2. Kurang (-)\n";
    cout << "3. Kali (*)\n";
    cout << "4. Bagi (/)\n";
    cout << "5. Modulus (%) [integer]\n";
    cout << "6. Pangkat (a^b)\n";
    cout << "7. Akar (sqrt)\n";
    cout << "8. Persen (a% dari b)\n";
    cout << "9. Faktorial (n!) [integer]\n";
    cout << "10. MC (Memory Clear)\n";
    cout << "11. MR (Memory Recall)\n";
    cout << "12. M+ (Tambah ke Memory)\n";
    cout << "13. M- (Kurangi dari Memory)\n";
    cout << "14. Lihat History\n";
    cout << "15. Clear History\n";
    cout << "0. Keluar\n";
    cout << "Pilih: ";
}

void waitEnter() {
  cout << "\nTekan ENTER untuk lanjut...";
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
  cin.get();
}

int main() {
    int pilih;
    double mem = 0.0;
    vector<double> history;

    while (true) {
        showMenu();

        if (!(cin >> pilih)) {
            cout << "Input harus angka.\n";
            clearInput();
            continue;
        }

        if (pilih == 0) {
            cout << "Bye.\n";
            break;
        }

        switch (pilih) {
            case 1: {
                double a, b;
                cout << "Masukkan a b: ";
                if (!(cin >> a >> b)) { cout << "Input salah.\n"; clearInput(); break; }
                double result = a + b;
                cout << "Hasil: " << result << "\n";
                history.push_back(result);
                waitEnter();
                break;
            }
            case 2: {
                double a, b;
                cout << "Masukkan a b: ";
                if (!(cin >> a >> b)) { cout << "Input salah.\n"; clearInput(); break; }
                double result = a - b;
                cout << "Hasil: " << result << "\n";
                history.push_back(result);
                waitEnter();
                break;
            }
            case 3: {
                double a, b;
                cout << "Masukkan a b: ";
                if (!(cin >> a >> b)) { cout << "Input salah.\n"; clearInput(); break; }
                double result = a * b;
                cout << "Hasil: " << result << "\n";
                history.push_back(result);
                waitEnter();
                break;
            }
            case 4: {
                double a, b;
                cout << "Masukkan a b: ";
                if (!(cin >> a >> b)) { cout << "Input salah.\n"; clearInput(); break; }
                if (b == 0) {
                    cout << "Error: pembagian dengan 0.\n";
                } else {
                    double result = a / b;
                    cout << "Hasil: " << result << "\n";
                    history.push_back(result);
                }
                waitEnter();
                break;
            }
            case 5: {
                int a, b;
                cout << "Masukkan a b (integer): ";
                if (!(cin >> a >> b)) { cout << "Input salah.\n"; clearInput(); break; }
                if (b == 0) cout << "Error: modulo dengan 0.\n";
                else {
                    int r = a % b;
                    cout << "Hasil: " << r << "\n";
                    history.push_back((double)r);
                }
                waitEnter();
                break;
            }
            case 6: {
                double a, b;
                cout << "Masukkan a b (a^b): ";
                if (!(cin >> a >> b)) { cout << "Input salah.\n"; clearInput(); break; }
                double result = pow(a, b);
                cout << "Hasil: " << result << "\n";
                history.push_back(result);
                waitEnter();
                break;
            }
            case 7: {
                double a;
                cout << "Masukkan a: ";
                if (!(cin >> a)) { cout << "Input salah.\n"; clearInput(); break; }
                if (a < 0) cout << "Error: akar negatif tidak bisa (real).\n";
                else {
                    double result = sqrt(a);
                    cout << "Hasil: " << result << "\n";
                    history.push_back(result);
                }
                waitEnter();
                break;
            }
            case 8: {
                double a, b;
                cout << "Masukkan a b (a% dari b): ";
                if (!(cin >> a >> b)) { cout << "Input salah.\n"; clearInput(); break; }
                double result = (a / 100.0) * b;
                cout << "Hasil: " << result << "\n";
                history.push_back(result);
                waitEnter();
                break;
            }
            case 9: {
                int n;
                cout << "Masukkan n (0-20 aman untuk long long): ";
                if (!(cin >> n)) { cout << "Input salah.\n"; clearInput(); break; }
                if (n < 0) { cout << "Error: faktorial negatif.\n"; break; }

                long long fact = 1;
                for (int i = 2; i <= n; i++) fact *= i;

                cout << "Hasil: " << fact << "\n";
                history.push_back((double)fact);
                waitEnter();
                break;
            }

            case 10: {
                mem = 0.0;
                cout << "Memory cleared (mem = 0)\n";
                waitEnter();
                break;
            }
            case 11: {
                cout << "Memory: " << mem << "\n";
                waitEnter();
                break;
            }
            case 12: {
                double x;
                cout << "Masukkan nilai untuk M+: ";
                if (!(cin >> x)) { cout << "Input salah.\n"; clearInput(); break; }
                mem += x;
                cout << "Memory sekarang: " << mem << "\n";
                waitEnter();
                break;
            }
            case 13: {
                double x;
                cout << "Masukkan nilai untuk M-: ";
                if (!(cin >> x)) { cout << "Input salah.\n"; clearInput(); break; }
                mem -= x;
                cout << "Memory sekarang: " << mem << "\n";
                waitEnter();
                break;
            }

            case 14: {
                if (history.empty()) { cout << "History kosong.\n"; break; }
                cout << "=== HISTORY (" << history.size() << ") ===\n";
                for (size_t i = 0; i < history.size(); i++) {
                    cout << i + 1 << ". " << history[i] << "\n";
                }
                waitEnter();
                break;
            }
            case 15: {
                history.clear();
                cout << "History cleared.\n";
                waitEnter();
                break;
            }

            default:
                cout << "Pilihan ga valid.\n";
        }
    }

    return 0;
}
