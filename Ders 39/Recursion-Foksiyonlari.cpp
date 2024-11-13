#include <iostream>
#include <string>
using namespace std;
//işlemimiz girdiğimiz sayıya kadar olan tüm sayıların toplamını buluyor 
int sum(int);//Her zaman mainin üstünde !

int main ()
{ int result, number;
  cout<<"Bir sayi giriniz: ";
  cin>>number;
  result=sum(number); // Kullanıcının girdiği sayıyı foksiyonumuzun içine atıyoruz
  cout<<"Sonuc: "<<result<<"\n"; // sonucu yazdırma
  return 0;
    } 
int sum(int x){
    if(x>0)
    return x+sum(x-1);
    else
      return 0;
}