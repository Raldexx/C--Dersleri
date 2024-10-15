#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string food="kebab";
    string &meal=food; // & ==  Meal değişkenimiz (Öğün) food veriable ımızın içindeki veriyi tutmaya başlıyor


    cout<<food<<"\n";
    cout<<meal<<"\n";

    // Değişkenin adresine ulaşmak için verable ımızın başına & işareti getirebiliriz Örn:
    cout<<&food<<"\n";
    }
