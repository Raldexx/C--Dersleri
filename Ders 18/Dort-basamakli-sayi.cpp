#include <iostream>
using namespace std;

int main(){
short int number, result, ab, cd;

cout<<"Dort basamakli ve pozitif bir sayi giriniz: ";
cin>>number;
ab=number/100;
cd=number%100;
result=(ab+cd)*(ab+cd);
if (result==number)
    cout<<"Bu ozel bir sayi\n"; /*ÖRN: 3025 ÖZEL BİR SAYIDIR!*/
    else
    cout<<"Bu ozel bir sayi degil\n";/*ÖRN: 2024 ÖZEL OLMAYAN BİR SAYIDIR!*/





return 0;
}