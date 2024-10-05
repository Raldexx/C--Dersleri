#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Kac adet sayi gireceksiniz? ";
    cin >> n;

    double toplam = 0.0; // Toplamımızı tutmak için
    double sayi;

    for (int i = 0; i < n; i++) {
        cout << "Sayi " << (i + 1) << ": ";
        cin >> sayi;
        toplam += sayi; // sayıyı toplama ekliyoz
    }

    double ortalama = toplam / n; // Buradada ortalamasını hesaplıyoruz
    cout << "Girdiginiz sayilarin ortalamasi: " << ortalama << endl;

    return 0;
}