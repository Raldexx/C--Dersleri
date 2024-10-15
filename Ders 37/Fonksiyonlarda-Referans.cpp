#include <iostream>
#include <string>
using namespace std;

void swapNumbers (int &x, int &y);//Fonksiyonumuzu tanıttık

int main()
{
    int FirstNumber=7,secondNumber=19;
    cout<<"Once:"<<FirstNumber<<" "<<secondNumber<<"\n"; //Codelar aynı fakat birinci sayının yerine ikinci sayı gelicek...
    swapNumbers(FirstNumber, secondNumber);
    cout<<"Degisim Sonrasi: "<<FirstNumber<<" "<<secondNumber<<"\n";
    return 0;

}
 void swapNumbers(int &x, int &y){ //Fonksiyonumuz
 int z=x;
 x=y;
 y=z;
 }