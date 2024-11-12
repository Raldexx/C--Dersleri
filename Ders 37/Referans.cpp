#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string food="kebab";
    string &meal=food; // & ==  Meal değişkenimiz (Öğün) food veriable ımızın içindeki veriyi tutmaya başlıyor


    cout<<food<<"\n";                                  // & işaretimizin ingilizce karşılığı : ampersand
    cout<<meal<<"\n";                                  // & işaretimizin türkçe karşılığı: Ve (veya ampersant)ss

    // Değişkenin adresine ulaşmak için verable ımızın başına & işareti getirebiliriz Örn:
    // cout<<&food<<"\n";
    }
